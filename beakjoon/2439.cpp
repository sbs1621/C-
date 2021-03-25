#include<iostream>
using namespace std;

int main(){
	int N;
	int K= 0;
	cin >> N;
	if (N >= 1 && N <= 100) {
		for (int i = 1; i <= N; i++)
		{	
			K = N - i;
			for (int k = 0; k < K; k++)
			{
				cout << " ";
			}
			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
}
