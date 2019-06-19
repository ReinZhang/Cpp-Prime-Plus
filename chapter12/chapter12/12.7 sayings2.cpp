//// sayings2.cpp -- using pointers to objects
//// compile with string1.cpp
//#include<iostream>
//#include<cstdlib>		// (or stdlibbe.h) for rand(), srand()
//#include<ctime>			// (or time.h) for time()
//#include"12.4 string1.h"
//const int Arsize = 10;
//const int MaxLen = 81;
//int main()
//{
//	using namespace std;
//	String name;
//	cout << "Hi, what's your name?" << endl;
//	cin >> name;
//
//	cout << name << ", please enter up to " << Arsize
//		<< " short sayings  <empty line to quit>:\n";
//	String sayings[Arsize];			// temporary storage
//	char temp[MaxLen];
//	int i;
//	for (i = 0; i < Arsize; i++)
//	{
//		cout << i + 1 << ": ";
//		cin.get(temp, MaxLen);
//		while (cin&&cin.get()!='\n')
//		{
//			continue;
//		}
//		if (!cin || temp[0] == '\0')	// empty line?
//			break;						// i not incremented
//		else
//			sayings[i] = temp;			// overloaded assignment
//	}
//	int total = i;						// total # of lines read
//
//	if (total > 0)
//	{
//		cout << "Here are your sayings:" << endl;
//		for (i = 0; i < total; i++)
//			cout << sayings[i] << endl;
//
//		// use pointers to keep track of shortest, first strings
//		String*shortest = &sayings[0];	// initialize to first object
//		String*first = &sayings[0];
//		for (i = 1; i < total; i++)
//		{
//			if (sayings[i].length() < shortest->length())
//				shortest = &sayings[i];
//			if (sayings[i] < *first)	// compare values
//				first = &sayings[i];	// assign address
//		}
//		cout << "Shortest sayings:" << endl << *shortest << endl;
//		cout << "First alphabetically:\n" << *first << endl;
//		srand(time(0));
//		int choice = rand() % total;	// pick index at random
//		// use new to create, initialize new String object
//		String*favourite = new String(sayings[choice]);
//		cout << "My favourite saying:\n" << *favourite << endl;
//		delete favourite;
//	}
//	else cout << "Not much to say,eh?\n";
//	cout << "Bye." << endl;
//	return 0;
//}

#include<iostream>

using namespace std;

void ExceptionFun(int i)
{
	try
	{
		if (i == 1)
			throw "Error!";
		if (i == 2)
			throw i;
		cout << i << endl;
	}
	catch (const char*)
	{
		cout << "catch char*" << endl;
	}
	cout << "End of ExceptionFun()\n";
}

int main()
{
	try
	{
		for (int i = 0; i < 3; i++)
		{
			ExceptionFun(i);
			cout << "in try" << endl;
		}
	}
	catch (int&)
	{
		cout << "catch the Exception " << endl;
	}
}