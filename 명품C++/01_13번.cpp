#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[4] = { "짬뽕", "짜장", "군만두", "종료" };
	int c,d;

	while (true)
	{
		cout << "짬뽕 : 1, 짜장 : 2, 군만두 : 3, 종료 4 >> ";
		cin >> c;
		if (c == 4)
		{
			cout << "오늘 영업은 끝났습니다.";
			break;
		}
		else if (c < 1 || c >4)
		{
			cout << "다시 주문하세요" << endl;
		}
		else
		{
			cout << "몇인분? ";
			cin >> d;
			cout << s[c - 1] << d << "인분 나왔습니다." << endl;
		}
	}
}
