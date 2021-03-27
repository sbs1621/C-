#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string o;
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		int sum = 0;
		cin >> o;
		for (int j = 0; j < o.length(); j++)
		{
			if ((char)o[j] == 'O')
				count++;
			else
				count = 0;
			sum = sum + count;
		}
		cout << sum << endl;
	}
}
