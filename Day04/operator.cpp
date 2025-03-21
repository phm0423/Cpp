/*
*/
#include <iostream>

class MyClass {
private:
	int m_a, m_b;
	// const char* m_name;
public:
	MyClass(int a = 0, int b = 0/*, const char* name = nullptr*/) : m_a(a), m_b(b) /*m_name(name)*/ {}
	void showMyClass() {
		std::cout << m_a << ", " << m_b /* << ", " << m_name */<< std::endl;
	}
};

int main()
{
	//MyClass obj1{ 1, 2/*, "홍길동"*/};
	//obj1.showMyClass();

	//MyClass obj2;
	//obj2 = obj1;						// num = 10; - 복사를 통해 멤버변수가 가지고 있는 값이 같음
	//obj2.showMyClass();					// 오버로딩으로 가능함

	MyClass obj1{ 10, 20 };
	MyClass obj2{ 30, 40 };
	//MyClass obj3 = obj1 + obj2;			// 연산자 오버로딩 필요


	return 0;
}