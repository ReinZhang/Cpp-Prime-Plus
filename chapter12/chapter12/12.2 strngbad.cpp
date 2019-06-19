//// strngbad.cpp -- StringBad class methods
//#include<cstring>					// string.h for some
//#include"12.1 strngbad.h"
//using std::cout;
//
//// initializing static class member
//int StringBad::num_strings = 0;
//
//// class methods
//// construct StringBad from c string
//StringBad::StringBad(const char*s)
//{
//	len = std::strlen(s);			// set size
//	str = new char[len + 1];		// allot storage
//	std::strcpy(str, s);			// initialize pointer
//	num_strings++;					// set object count
//	cout << num_strings << ": \"" << str
//		<< "\" object created" << std::endl;
//									// For Your Information
//}
//
//StringBad::StringBad()				// default constructor
//{
//	len = 4;
//	str = new char[4];				// default string
//	std::strcpy(str, "C++");
//	num_strings++;
//	cout << num_strings << ": \"" << str
//		<< "\" default object created" << std::endl;	// FYI
//}
//
//StringBad::~StringBad()				// necessary destuctor
//{
//	cout << "\"" << str << "\" object delected, ";		// FYI
//	--num_strings;					// required
//	cout << num_strings << " left" << std::endl;		// FYI
//	delete[]str;
//}
//
//std::ostream&operator<<(std::ostream&os, const StringBad &st)
//{
//	os << st.str;
//	return os;
//}