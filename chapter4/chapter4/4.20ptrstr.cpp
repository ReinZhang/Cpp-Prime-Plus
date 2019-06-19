//// ptrstr.cpp -- using poointers to strings
//#include<iostream>
//#include<cstring>				// declare strlen(),strcpy()
//int main()
//{
//	using namespace std;
//	char animal[20] = "bear";	// animal holds bear
//	const char*bird = "wren";	// bird holds address of string
//	char*ps;					// uninitialized
//	cout << animal << " and ";	// display bear
//	cout << bird << "\n";		// display wren
//	// cout<<ps<<endl;			// may display garbage, my cause a crash
//
//	cout << "Enter a king of animal: ";
//	cin >> animal;				// ok if input<20 chars
//	// cin >> ps; Too horrible a blunder to try; ps doesn't
//	//				point to allocated space
//
//	ps = animal;				// set ps tp point to string
//	cout << ps << "!\n";
//	cout << "Bedore using strcpy():\n";
//	cout << animal << " at " << (int*)ps << endl;
//
//	ps = new char[strlen(animal) + 1];	// get new storage
//	strncpy(ps, animal,20);			// copy string to new storage
//	cout << "After using strcpy():\n";
//	cout << animal << " at " << (int*)animal << endl;
//	cout << ps << " at " << (int*)ps << endl;
//	delete[]ps;
//	return 0;
//}