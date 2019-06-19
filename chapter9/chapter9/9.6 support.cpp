//// support.cpp -- use external variable
//// compile with ecternal.cpp
//#include<iostream>
//extern double warming;	// use warming from another file
//
//// function prototypes
//void update(double);
//void local();
//
//using std::cout;
//using std::endl;
//
//void updata(double dt)	// modifies global variable
//{
//	extern double warming;	// optional redeclaration
//	warming += dt;			// uses global warming
//	cout << "Updata global warming to " << warming;
//	cout << " degree." << endl;
//}
//
//void local()				// uses local variable
//{
//	double warming = 0.8;	// new variable hides exteral one
//
//	cout << "Local warming = " << warming << " degree." << endl;
//		// Access global variable with the
//		// scope resolution operator
//	cout << "But global warming = " << ::warming;
//	cout << " degree." << endl;
//}