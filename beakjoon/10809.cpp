#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cnt[26];
	for (int i = 0; i < 26; i++)
	{
		cnt[i] = -1;
	}
	string o;
	cin >> o;
	for (int i = 0; i < o.length(); i++)
	{
		if (cnt[(int)o[i] - 'a'] == -1)
			cnt[(int)o[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << cnt[i] << " ";
	}
}
