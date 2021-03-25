#include <iostream>
using namespace std;
int main()
{
	int n;
	int min = 1000000;
	int max = -1000000;
	cin >> n;
	int* a = new int[n]; // 기억해두기

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (max <= a[i])
			max = a[i];
		if (min >= a[i])
			min = a[i];
		
	}
	cout << min << " " << max;
}
