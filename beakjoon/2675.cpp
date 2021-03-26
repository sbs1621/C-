#include<iostream>
using namespace std;

int main()
{
	int num, a;
	string t;
	cin >> num;
	for (int i = 0; i < num ; i++)
	{
		cin >> a >> t;
		for (int j = 0; j < t.length() ; j++)
		{
			for (int k = 0; k < a; k++)
				cout << t[j];
		}
		cout << endl;
	}
}
