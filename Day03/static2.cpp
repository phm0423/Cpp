/*
*/
#include <iostream>

class AAA {
private:
	static int static_a;		// static 멤버 변수
	int n;
public:
	AAA(int n);
	static void setStatic_a();			// static 변경할수있는 멤버함수
	void print();
};

int AAA::static_a = 100;				// static은 클래스 밖에서 초기화
AAA::AAA(int n) {
	this->n = n;
}
void AAA::print() {
	printf("static_a: %d, n: %d\n", static_a, n);
}
void AAA::setStatic_a() {				
	static_a = 50;
	//n = 0;				// 일반 멤버의 접근은 허용되지 않는다. 스태틱 멤버의 사용만 가능하다.
}

int main()
{
	AAA obj1(10), obj2(20);		// 객체 생성시 멤버변수는 각자지만 멤버 함수는 공유
	obj1.print();
	obj2.print();

	obj1.setStatic_a();
	obj1.print();

	return 0;
}