#include<iostream>
#include <cstring>
using namespace std;


void problem3()
{
	int a[9];
	int cnt = 0;
	for (int i = 0; i < 9; i++){
		cin >> a[i];}
	int b = a[0];
	for (int i = 0; i < 9; i++){
		if (b <= a[i]) { b = a[i]; cnt = i; }	
	}
	cout << b << endl << cnt + 1;
}


int main()
{
	problem3();
}
