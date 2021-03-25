#include<iostream>
#include<string>
using namespace std;

int main()
{
	string t;
	int c = 0;
	getline(cin, t);
	for (int i = 0; i < t.length(); i++)
	{
		if (isspace(t[i]) != 0)
			c++;
	}
	if (isspace(t[0]) != 0)
		c = c - 1;
	if (isspace(t[t.length()-1]) != 0)
		c = c - 1;
	cout << c+1;

}
