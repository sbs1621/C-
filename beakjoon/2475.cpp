#include<iostream>
#include<cmath>
using namespace std;

void problem2() {
	int a[5];
	long long b = 0;
	for (int i = 0; i < 5; i++){
		cin >> a[i];
		b = b + pow(a[i],2);
	}
	cout << b % 10;
}


int main()
{
	problem2();
}
