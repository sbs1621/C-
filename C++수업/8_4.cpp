class Point{
	int x, y;
public:
	Point(int x, int y){ this->x = x; this->y = y; }
	int getX(){ return x; }
	int getY(){ return y; }
protected:
	void move(int x, int y){ this->x = x; this->y = y; }
};
class ColorPoint : public Point{
	int x, y;
	string color;
public:
	ColorPoint():Point(x,y){ x = 0; y = 0; color = "BLACK"; }
	ColorPoint(int x, int y) :Point(x, y){ this->x = x; this->y = y; this->color = "BLACK"; }
	void setPoint(int x, int y){ move(x, y); this->x = getX(); this->y = getY(); }
	void setColor(string color){ this->color = color; }
	void show(){ cout << color << "색으로 (" << x << "," << y << ")에 위치한 점입니다." << endl; }
};
int main(){
	ColorPoint zeroPoint;
	zeroPoint.show();
	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}
