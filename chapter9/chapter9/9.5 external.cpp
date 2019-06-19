//// external.cpp -- external variable
//// compile with support.cpp
//#include<iostream>
//using namespace std;
//// external variable
//double warming = 0.3;		// warming defined
//// function prototypes
//void updata(double);
//void local();
//
//int main()					// uses global variable 
//{
//	cout << "Global warming is " << warming << " degree." << endl;
//	updata(0.1);			// call function to change warming
//	cout << "Glabal warming is " << warming << " degree." << endl;
//	local();				// call function with local warming	
//	cout << "Global warming is " << warming << " degree." << endl;
//	return 0;
//}