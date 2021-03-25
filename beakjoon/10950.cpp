#include<iostream>
using namespace std;

int main(){
	int a, b;
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		cin >> a >> b;
			if (0 < a && b < 10 && 0 < b && a < 10)
			{
				cout << a + b << endl;
			}
			else
				break;
		
	}
	
}
