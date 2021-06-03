class Phone{
	string name;
	string telnum;
	string address;
public:
	Phone(string name = "", string telnum = "", string address = ""){
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}
	friend istream& operator >>(istream& radius, Phone &name);
	friend ostream& operator <<(ostream& radius, Phone name);
};
istream& operator >>(istream& r, Phone &p){
	cout << "이름";
	r >> p.name;
	cout << "전화번호";
	r >> p.telnum;
	cout << "주소";
	r >> p.address;

	return r;
}
ostream& operator <<(ostream& r, Phone n){
	r << "(" << n.name << "," << n.telnum <<","<< n.address<<")";
	return r;
}
int main(){
	Phone girl, boy;
		cin >> girl >> boy;
		cout << girl << endl << boy;
}
