#include<iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	if (N >= 1 && N <= 100000) {
		int a;
		for (int i = 0; i < N; i++)
		{
			a = N - i;
			cout << a << "\n";
		}
	}
}
