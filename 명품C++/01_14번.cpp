#include <iostream>
#include <string>
using namespace std;

int main()
{
	string c[3] = { "에스프레소", "아메리카노", "카푸치노" };
	int n;//커피 갯수
	int co[3] = { 2000,2300,2500 };//커피가격
	int a = 0; // 총 가격
	int b = 0;//반복 돌때마다 가격
	char coffe[100];//커피 입력
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원" << endl;
	while (true)
	{
		cin >> coffe >> n;
		if (coffe == c[0])//에스프레소
			b = co[0];
		if (coffe == c[1])//아메리카노
			b = co[1];
		if (coffe == c[2])//카푸치노
			b = co[2];

		cout << b * n << "원 입니다. 맛잇게 드세요 " << endl;
		a += (b * n);

		if (a > 20000)//2만원 이상 매출을 올리면 break
    {
			cout << "오늘 " << a << "원을 판매하여 카페를 닫습니다.";
			break;
		}

	}
}
