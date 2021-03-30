#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 0;
	string s[20000];

	while (i != n)
	{
		cin >> s[i];
		i++;
	}
	sort(s, s + n); //오름차순 정렬 algorithm 헤더 필요
	for (int i = 0; i < 20000; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s[j].length() == i) {
				if (s[j] != s[j + 1])
					cout << s[j] << endl;
			}
		}
	}
}
