#include<iostream>
using namespace std;

int main()
{
	int c;
	double max = 0.0;
	double sum = 0.0;
	cin >> c;
	if (c <= 1000)
	{
		double n[sizeof(c)];
		double d[sizeof(c)];
		for (int i = 0; i < c; i++)
		{
			cin >> n[i];
			if (max <= n[i])
				max = n[i];
		}
		for (int i = 0; i < c; i++)
		{
			d[i] = (n[i] / max) * 100.0;
			sum += d[i];
		}
		cout << sum / c;
	}
	exit(0);
	
}
