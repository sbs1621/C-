#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int ww = w - x;
	int hh = h - y;
	
		int a[4] = { x,y,ww,hh };
		int c = a[0];
		for (int i = 0; i < 4; i++) {
			if (c >= a[i])
				c = a[i];
		}
		cout << c;
}
