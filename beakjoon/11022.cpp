#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b;
	int t;
	cin >> t;
	

		for (int i = 0; i < t; i++)
		{
			cin >> a >> b;
			if (0 < a && b <= 1000 && 0 < b && a <= 1000)
				cout << "Case #"<<i + 1<<": "<<a<<" + "<<b <<" = "<< a + b << "\n";
			else
				break;
		}
	
}
