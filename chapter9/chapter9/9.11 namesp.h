// namesp.h
#include<string>
// create the pers and debts namespace
namespace pers
{
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	void getPerson(Person&);
	void ShowPerson(const Person&);
}

namespace debts
{
	using namespace pers;
	struct Debt
	{
		Person name;
		double amount;

	};
	void getDebt(Debt&);
	void showDebt(const Debt &);
	double sumDebt(const Debt ar[], int n);
}