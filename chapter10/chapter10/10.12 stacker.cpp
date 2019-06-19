// stacker.cpp -- testing the Stack class
#include<iostream>
#include<cctype>	// or ctype.h
#include"10.10 stack.h"
int main()
{
	using namespace std;
	Stack st;		// create an empty stack
	char ch;
	unsigned long po;
	cout << "Please enter A to add a purchase order," << endl
		<< "P to process a Po, or Q to quit." << endl;
	while (cin >> ch&&toupper(ch) != 'Q')
	{
		while (cin.get() != '\n');
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case'A':
		case'a':{
			cout << "Enter a po number to add: ";
		cin >> po;
		if (st.isfull())
			cout << "Stack already full" << endl;
		else st.push(po);
		break;
		}
		case'P':
		case'p': {
			if (st.isempty())
				cout << "Stack already empty." << endl;
			else
			{
				st.pop(po);
				cout << "PO #" << po << " popped" << endl;
			}
			break;
		}

		}
		cout << "Please enter A to add a puchase order," << endl
			<< "P to process a PO, or Q to quit." << endl;
	}
	cout << "Bye!" << endl;
	return 0;
}