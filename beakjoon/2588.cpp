#include<iostream>
using namespace std;

int main(){
	int A,B;
	cin >> A >> B;
	cout << (B % 10) * A << endl << ((B % 100)/10)*A << endl <<((B % 1000)/100) * A << endl << A*B;
}
