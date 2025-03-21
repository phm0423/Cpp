/*
	
*/
#include <iostream>

class MyClass {
private:
	int x, y;
public:
	MyClass(int ax = 0, int ay = 0): x(ax), y(ay){}
	MyClass(const MyClass& other) {
		x = other.x;
		y = other.y;
	}
	MyClass& add(const MyClass& other) {
		this->x = x + other.x;
		this->y = y + other.y;
		return*this;
	}

	MyClass operator+(const MyClass& other){
		return MyClass(x + other.x, y + other.y);
	}
	MyClass operator+(int n) {
		return MyClass(x + n, y + n);
	}
	void showMyClass() {
		printf("x: %d, y: %d\n", x, y);
	}
};

int main() {
	MyClass obj1(10, 20);
	obj1.showMyClass();
	MyClass obj2(20, 30);
	obj2.showMyClass();
	MyClass obj3 = obj1.add(obj2);
	obj3.showMyClass();
	MyClass obj4 = obj1.operator+(obj3);
	obj4.showMyClass();

	MyClass obj5 = obj4 + 100;
	obj5.showMyClass();

	return 0;
}

// 오버로딩 할 수 없는 연산자:
// ::, ., *, sizeof