///*
//	생성자 constructor
//	생성자 호출로 객체가 만들어진다.
//	객체 생성시 구조에 맞는 생성자가 없으면 객체는 생성되지 않는다.
//	생성자는 초기화기능에 사용한다.
//	생성자는 오버로딩이 가능하다.
//	프로그래머가 생성자를 작성하면 디폴트 생성자는 제공하지 않는다.
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int m_num1;
//	int m_num2;
//public:
//	MyClass(){}								// 기본 생성자
//
//	MyClass(int n1) {
//		m_num1 = n1;
//		m_num2 = 0;
//	}
//
//	MyClass(int num1, int num2) {			// 생성자 (입력을 두개 받는) - 기본생성자를 따로 명시 하지않으면 사라진다.
//		m_num1 = num1;
//		m_num2 = num2;
//	}
//	~MyClass(){}
//	void printData() {
//		cout << "나는 MyClass의 인스턴스 입니다.";
//		cout << "m_num1: " << m_num1 << ", m_num2: " << m_num2 << endl;
//	}
//};
//
//int main()
//{
//	MyClass obj;
//	MyClass obj2(40);
//	MyClass obj3(100, 200);
//	obj2.printData();
//	obj3.printData();
//
//	return 0;
//}
