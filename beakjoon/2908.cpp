#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m;
	int a = 0, b = 0;
	cin >> n >> m;
	a = ((n % 10) * 100) + ((n % 100) - (n % 10)) + (n/100);
	b = ((m % 10) * 100) + ((m % 100) - (m % 10)) + (m/100);

	if (a < b)
		a = b;
	cout << a;
}
