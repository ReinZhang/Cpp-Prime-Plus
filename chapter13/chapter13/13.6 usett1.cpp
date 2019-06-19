// usett1.cpp -- using base class and derived class
#include<iostream>
#include"13.4 tabtenn1.h"

int main(void)
{
	using std::cout;
	using std::endl;
	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
	rplayer1.Name();		// derived object uses base method
	if (rplayer1.HasTable())
		cout << ": has a table." << endl;
	else
		cout << ": hasn't a table." << endl;
	cout << "Name: ";
	rplayer1.Name();
	cout << "; Rating: " << rplayer1.Rating() << endl;
// initialize RatedPlayer using TableTennisPlayer object
	RatedPlayer rplayer2(1212, player1);
	cout << "Name: ";
	rplayer2.Name();
	cout << ", Rating: " << rplayer2.Rating() << endl;

	return 0;
}