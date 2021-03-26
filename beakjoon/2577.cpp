#include<iostream>
using namespace std;

int main()
{
	int A, B, C;
	int sum;
	int a[10] = { 0 };
	cin >> A >> B >> C;
	sum = A * B * C;
	while (sum > 0)
	{
		a[sum % 10]++;
		sum /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}
