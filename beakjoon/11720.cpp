#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	cin >> n;
	char *o = new char[n];
	cin >> o;
	for (int i = 0; i < n; i++)
	{
		sum += (o[i] - 48);
	}

	cout << sum;
}
