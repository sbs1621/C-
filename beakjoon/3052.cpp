#include <iostream>
using namespace std;

int main()
{
	int n[10];
	int a[10];
	int cnt = 0;

	for (int i = 0; i < 10; i++)
		cin >> n[i];
	for (int i = 0; i < 10; i++)
		a[i] = n[i] % 42;
	for (int i = 0; i < 10; i++)
	{
		cnt++;
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j] && j != i)
			{
				cnt-=1;
				break;
			}
			
		}
		
	}
	
	cout << cnt;
}
