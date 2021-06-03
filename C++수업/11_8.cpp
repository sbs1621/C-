class Circle{
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = ""){
		this->name = name; this->radius = radius;
	}
	friend istream& operator >>(istream& radius, Circle &name);
	friend ostream& operator <<(ostream& radius, Circle name);
	
};
istream& operator >>(istream& r, Circle &n){
	cout << "반지름>>";
	r >> n.radius;
	cout << "이름>>";
	r >> n.name;
	return r;
}
ostream& operator <<(ostream& r, Circle n){
	r << "(반지름이 " << n.radius << "인" << n.name << ")";
	return r;
}
int main(){
  Circle d, w;
	cin >> d >> w;
	cout << d << w;
}
