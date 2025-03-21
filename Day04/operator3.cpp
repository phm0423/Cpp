/*
	멤버함수 연산자 오버로딩: p1 operator연산자(p2) ex) p1 operator+(p2)
*/
#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int n): value(n){}
	MyClass operator+(const MyClass& other) {			// 연산자 오버로딩
		printf("+ overloading\n");
		return MyClass(value + other.value);
	}

	void showMyClass() {
		printf("value: %d\n", value);
	}

};

int main()
{
	MyClass obj1(10);				// 초기값을 가지는 객체 생성
	obj1.showMyClass();

	MyClass obj2(obj1);				// obj를 복사해서 객체 생성
	obj2.showMyClass();

	MyClass obj3 = obj2;			// 대입연산자 제공 - 복사  - obj3 초기화시키면서 복사하여 객체 생성
	obj3.showMyClass();

	MyClass obj4 = obj1 + obj2 + obj3;		// + 는 기본적으로 제공하지 않는 연산자 - 객체를 더한 결과를 가지고 객체 생성
	//MyClass obj4 = (obj1.operator+(obj2)).operator+(obj3);
	obj4.showMyClass();

	return 0;
}