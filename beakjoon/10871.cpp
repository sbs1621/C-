#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a;
	int t, c;
	cin >> t >> c;
	

		for (int i = 0; i < t; i++)
		{
			cin >> a;
			if (c > a)
				cout << a << " ";
		}
	
}
