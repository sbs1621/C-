class Pizza{
	int radius;
public:
	Pizza(int radiius = 0){ this->radius = radiius; }
	int getRadius(){ return radius; }
	void setRadius(int radius){ this->radius = radius; }
	double getArea(){ return 3.14*radius*radius; }
};
class NamedPizza : public Pizza{
	string name;
	int radius;
public:
	NamedPizza(int radius = 0, string name = ""){ this->radius = radius; this->name = name; }
	void setName(string name){ this->name = name; }
	string getName(){ return name; }
};

int main(){
	NamedPizza pizza[5];
	int r;
	string p;
	cout << "5개의 정수 반지름과 원의 이름을 입력하세요";
	for (int i = 0; i < 5; i++){
		cout << i + 1 << ">> ";
		cin >> r;
		pizza[i].setRadius(r);
		cin >> p;
		pizza[i].setName(p);
	}
	int a = pizza[0].getArea();
	int cnt = 0;
	for (int i = 0; i < 5; i++){
		if (a < pizza[i].getArea())
		{
			a = pizza[i].getArea();
			cnt = i;
		}
	}
	cout << "가장 면적이 큰 피자는 " << pizza[cnt].getName() << "입니다.";


}
