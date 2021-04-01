#include<iostream>
#include<string>
using namespace std;

bool bigger(int a, int b, int & big)
{
	if (a == b)
		return true;
	else
	{
		if (a > b)
			big = a;
		else
			big = b;
		return false;
	}
}

int main()
{
	int a, b, big;
	cin >> a >> b;
	bigger(a, b, big);
	if (!bigger(a, b, big))
		cout << big;
	else
		cout << "서로 같다" << endl;
}
