//// funtemp.cpp -- using afunction template
//#include<iostream>
//// function template prototype
//template<typename T>	// or class T
//void Swap(T&a, T&b);
//
//int main()
//{
//	using namespace std;
//	int i = 10;
//	int j = 20;
//	cout << i << ',' << j << endl;
//	Swap(i, j);
//	cout << i << ',' << j << endl;
//
//	double x = 24.5, y = 81.7;
//	cout << x << ',' << y << endl;
//	Swap(x, y);
//	cout << x << ',' << y << endl;
//
//	return 0;
//}
//
//// function tenplate definition
//template<typename T>	// or class T
//void Swap(T&a, T&b) {
//	T temp;				// temp a  variable of type T
//	temp = a;
//	a = b;
//	b = temp;
//
//}