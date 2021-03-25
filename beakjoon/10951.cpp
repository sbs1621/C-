#include<iostream>
using namespace std;

int main(){
	int a, b;
		while(cin >> a)
		{
			cin >> b;
			if (a < 10 && b < 10 && 0 < a && 0 < b)
				cout << a + b << "\n";
			else
				break;
	
		}
	
}
