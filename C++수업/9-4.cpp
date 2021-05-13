class LoopAdder{
	string name;
	int x, y, sum;
	void read(){
		cout << name << ":" << endl;
		cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요>>";
		cin >> x >> y;
	}
	void write(){
		cout << x << "에서 " << y << "까지의 합 = " << sum << "입니다." << endl;
	}
protected:
	LoopAdder(string name = ""){ this->name = name; }
	int getX(){ return x; }
	int getY(){ return y; }
	virtual int calculate() = 0;
public:
	void run(){
		read();
		sum = calculate();
		write();
	}
};
class WhileLoopAdder : public LoopAdder{
	string name;
public:
	WhileLoopAdder(string name) : LoopAdder(name){ this->name = name; }
	int calculate(){
		int sum = 0;
		int x = getX();
		while (true){
			sum += x;
			x++;
			if (x == getY() + 1)
				break;
		}
		return sum;
	}
};
class DoWhileLoopAdder : public LoopAdder{
	string name;
public:
	DoWhileLoopAdder(string name) : LoopAdder(name){ this->name = name; }
	int calculate(){
		int sum = 0;
		int x = getX();
		do{
			sum += x;
			x++;
			if (x == getY() + 1)
				break;
		} while (true);
		return sum;
	}
};
int main(){
  WhileLoopAdder whileLoop("While Loop");
	whileLoop.run();

	DoWhileLoopAdder dowhileLoop("Do While Loop");
	dowhileLoop.run();
}
