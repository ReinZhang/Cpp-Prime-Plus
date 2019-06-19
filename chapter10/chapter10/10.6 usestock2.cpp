//// usetock2.cpp -- using Stock class
//// compile withh stock10.cpp
//#include<iostream>
//#include"10.4 stock10.h"
//
//int main()
//{
//	{
//		using std::cout;
//		using std::endl;
//		cout << "Using constructors to create new objects" << endl;
//		Stock stock1("NanoSmart", 12, 20.0);			// syntax 1
//		stock1.show();
//		Stock stock2 = Stock("Boffo Objects", 2, 2.0);	// syntax 2
//		stock2.show();
//
//		cout << "Assigning stock1 to stock2:" << endl;
//		stock2 = stock1;
//		cout << "Listing stock1 and stock2:" << endl;
//		stock1.show();
//		stock2.show();
//
//
//		cout << "Using a constructor to reset an object" << endl;
//		stock1 = Stock("Nifth Foods", 10, 50.0);		// temp object
//		cout << "Revised stock1:" << endl;
//		stock1.show();
//		cout << "Done" << endl;
//	}
//	return 0;
//}