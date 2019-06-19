//// vegnews.cpp -- using new and delete with classes
//// compile with strngbad.cpp
//#include<iostream>
//using std::cout;
//#include"12.1 strngbad.h"
//
//void callme1(StringBad&);		// pass by reference
//void callme2(StringBad);		// pass by value
//
//int main()
//{
//	{
//		cout << "Staring an inner block .\n";
//		StringBad headline1(" Celery Stajks at Midnight");
//		StringBad headline2("Lecture Prey");
//		StringBad sports("Spinach Leaces Bow1 for Bollards");
//		cout << "headline1: " << headline1 << std::endl;
//		cout << "headline2: " << headline2 << std::endl;
//		cout << "sports: " << sports << std::endl;
//		callme1(headline1);
//		cout << "headline1: " << headline1 << std::endl;
//		callme2(headline2);
//		cout << "headline2: " << headline2 << std::endl;
//		cout << "Initialize one object to another:\n";
//		StringBad sailor = sports;
//		cout << "sailor:  " << sailor << std::endl;
//		cout << "Assign one object to another:\n";
//		StringBad knot;
//		knot = headline1;
//		cout << "knot: " << knot << std::endl;
//		cout << "Exiting the block.\n";
//	}
//	cout << "End of main()\n";
//
//	return 0;
//
//}
//
//void callme1(StringBad& rsb)
//{
//	cout << "String passed by reference:\n";
//	cout << "	\"" << rsb << "\"\n";
//}
//
//void callme2(StringBad sb)
//{
//	cout << "String passed by value:\n";
//	cout << "		\"" << sb << "\"\n";
//}