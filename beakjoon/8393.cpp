#include<iostream>
using namespace std;

int main(){
	int N;
	int n = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
		n += i;
	cout << n;
}
