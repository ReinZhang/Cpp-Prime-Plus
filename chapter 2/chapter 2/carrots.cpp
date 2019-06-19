#include<iostream>
int main()
{
	using namespace std;

	int  carrots;//declare an ingteger variable

	carrots = 25;	//assign a value to the variable
	cout << "I have ";
	cout << carrots;	//display the value of the variable
	cout << " carrots";
	cout << endl;
	carrots--;
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
	return 0;
}