#include <iostream>
using namespace std;
int main()
{
	int n;
	int m[20];
	m[0] = 0;
	m[1] = 1;
	cin >> n;
	for (int i = 2; i < n + 2; i++)
	{
		m[i] = m[i - 1] + m[i -2];
	}

	cout << (int)m[n];

}
