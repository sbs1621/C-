#include <iostream>
using namespace std;

int main()
{
	long long n, m = 1;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		m *= (n - i);
	}
	if (n == 0)
		cout << '1';
	else
		cout << n * m;

}
