///*
//	멤버 초기화
//	1.
//	2.
//	3. 멤버를 객체로 하는경우
//*/
//#include <iostream>
//using namespace std;
//
//class ConstClass {
//private:
//	int m_value;
//	const int m_value2;			// 상수 멤버 변수는 객체 생성될 때 반드시 초기화가 되어야 한다. -> 콜론 초기화
//public:
//	ConstClass(int value, int value2) : m_value2(value2) { m_value = value; }
//	void showValue() {
//		printf("m_value: %d, m_value2: %d\n", m_value, m_value2);
//	}
//};
//class RefClass {
//private:
//	int& ref;				// 레퍼런스 역시 객체가 생성되기 전에 반드시 초기화가 이루어져야 한다.
//public:
//	RefClass(int& r):ref(r) {}
//	void showValue() {
//		printf("ref: %d\n", ref);
//	}
//};
//
//class Position {
//private:
//	int m_x;
//	int m_y;
//public:
//	Position(int x, int y) {
//		printf("Position 생성자!!\n");
//		m_x = x, m_y = y;
//	}
//	void getData() {
//		printf("m_x: %d, m_y:%d\n", m_x, m_y);
//	}
//};
//class ObjClass {				//obj클래스 객체가 생성되기전에 pos클래스 객체가 생성되어야함
//private:
//	Position pos;				// 객체 멤버변수
//public:
//	ObjClass(int x, int y) : pos(x, y) { printf("ObjCalss constructor!!\n"); }
//	void showValue() {
//		pos.getData();
//	}
//};
//int main()
//{
//	ConstClass obj(10, 20);
//	obj.showValue();
//
//	int n = 50;
//	RefClass obj2(n);
//	obj2.showValue();
//
//	cout << "===========================================" << endl;
//	ObjClass o(3, 6);
//	o.showValue();
//	return 0;
//}