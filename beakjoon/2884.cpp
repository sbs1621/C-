#include<iostream>
using namespace std;

int main(){
	int H,M,m = 0;
	cin >> H >> M;
	if (0 <= H && H<= 23 && 0 <= M && M <= 59) {
		
		if (M - 45 < 0)
		{
			M+= 15;
			H -= 1;
			if (H < 0)
				H = 23;
		}
		else
			M-=45;
		cout << H <<" "<< M;
	}
}
