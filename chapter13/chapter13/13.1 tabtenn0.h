// eabtenn0.h -- a table-tennis base class
#ifndef TABTENN0_H_
#define TABTENN0_H_
#include<string>
#include<iostream>
using std::cout;
using std::string;
// simple base class
class TableTennisPlayer
{
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string&fn = "none",const string &ln = "none", bool ht = false);
	void Name()const;
	//TableTennisPlayer(TableTennisPlayer&table) { firstname = table.firstname; lastname = table.lastname; hasTable = table.hasTable; cout << "Done" << std::endl; }
	bool HasTable()const { return hasTable; }
	void ResetTable(bool v) { hasTable = v; }
};
#endif // !TABTENN0_H_
