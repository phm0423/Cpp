///*
//	생성자사용
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//
//class MyClass {
//private:
//	int id;
//	//char name[20];	// 동적할당은Myclass3으로
//	char* name;
//	int age;
//public:
//	MyClass() {}		// 디폴트 생성자
//	MyClass(int _id, const char* _name, int _age);
//
//	/*void setData(int _id, const char* _name, int _age) {
//		id = _id;
//		strcpy(name, _name);
//		age = _age;*/
//
//	void getData() const;
//	
//	~MyClass() {		// 소멸자(자동호출된다. - 동적할당 경우 말고는 별도로 작성할  필요가 없다.)
//		delete[] name;
//	}
//};
//MyClass::MyClass(int _id, const char* _name, int _age) {
//	id = _id;
//	name = new char[strlen(_name) + 1];		// 동적할당
//	//name = _name;				// 배열을 선언한 후에 대입 연산자를 사용하여 값을 직접 할당할 수 없다.
//	strcpy(name, _name);
//	age = _age;
//}
//void MyClass::getData() const{					// 상수 멤버함수(모든 멤버 값들을 상수화 시킨다.
//	cout << "id: " << id << ", " << "이름: " << name << ", " << "나이 : " << age << endl;
//}
//int main()
//{
//	MyClass obj(1, "김철수", 20);	// 동적할당에 저장
//	//obj.setData(1, "김철수", 20);
//	obj.getData();
//	MyClass obj2(2, "트럼프", 34);
//	obj2.getData();
//
//
//	return 0;
//}