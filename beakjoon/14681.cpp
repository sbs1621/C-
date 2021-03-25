#include<iostream>
using namespace std;

int main(){
	int A,B;
	cin >> A >> B;
	if (A <= 1000 && A >= -1000 && B <= 1000 && B >= -1000 && A!=0 && B!=0) {
		if (A > 0 && B > 0)
			cout << "1";
		if (A < 0 && B > 0)
			cout << "2";
		if (A < 0 && B < 0)
			cout << "3";
		if (A > 0 && B < 0)
			cout << "4";
	}
}
