//백준에서 시간초과로 실패 이분탐색으로 다시풀어볼것
#include <iostream>
using namespace std;


int main()
{
	int n, m;
	cin >> n;
	int* s = new int[n];//첫번째로 입력할 값의 배열
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	cin >> m;
	int* d = new int[m];//두번째로 입력할 값의 배열
	int* a = new int[m];//0혹은 1을 담을 배열
	for (int i = 0; i < m; i++)
	{
		cin >> d[i];
	}
	for(int i = 0; i < m; i++)
		a[i] = 0;//0으로 초기화
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (s[i] == d[j])
				a[j] = 1; //일치하는 것이 있을경우에 배열의 값을 1로 만듬
		}
	}
	for(int i = 0; i < m; i++)
		cout << a[i] << endl;
}

