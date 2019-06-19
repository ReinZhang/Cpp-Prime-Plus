// textin2.cpp -- using cin.get(char)
#include<iostream>
int main()
{
	using namespace std;
	int count = 0;
	
	cout << "Enter characters; enter # to qiut:\n";
	for (char ch=0; !(ch == '#'); cin.get(ch), count++);
	cout << endl << count << " characters read\n";
}