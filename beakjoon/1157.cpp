#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string s;
	int cnt[27];
	int a;
	int b = 0;
	int c[27];
	int d = 0;
	int e = 0;
	int f = 0;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		s[i] = toupper(s[i]);

	}

	for (int i = 0; i < 27; i++)
	{
		cnt[i] = 0; c[i] = 0;
	}

	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if ((int)s[i] == 'A' + j)
			{
				cnt[j]++; //입력된 수의 반복된 횟수의 배열
			}
		}
	}
	for (int i = 0; i < 27; i++)
	{
		for (int j = 0; j < 27; j++)
		{
			if (cnt[i] == cnt[j] && i != j)
			{
				c[i] = cnt[i]; // 입력된 값 중에 반복된 횟수가 중복된 수의 배열
			}
		}

	}
	e = c[0];
	for (int i = 0; i < 27; i++)
	{
		if (e <= c[i])//입력된 값 중에 반복된 횟수가 중복된 수의 배열의 최대값
		{
			e = c[i];
			f = i;
		}
	}
	a = cnt[0];
	for (int i = 0; i < 27; i++)
	{
		if (a <= cnt[i])//cnt의 최대값
		{
			a = cnt[i];
			b = i;
		}
	}
	if (f == b)//cnt의 최대값이랑 입력횟수가 중복된 것들중의 최대값이 같은경우 
		cout << "?";
	else
		cout << char(b + 'A');
		
}
