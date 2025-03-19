///*
//	생성자사용
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	char name[20];	// 동적할당은Myclass3으로
//	int age;
//public:
//	MyClass(int _id, const char* _name, int _age) {
//		id = _id;
//		strcpy(name, _name);
//		age = _age;
//	}
//	
//	/*void setData(int _id, const char* _name, int _age) {
//		id = _id;
//		strcpy(name, _name);
//		age = _age;*/
//	
//	void getData() {
//		cout << "id: " << id << ", " << "이름: " << name << ", " << "나이 : " << age << endl;
//	}
//};
//int main()
//{
//	MyClass obj(1, "김철수", 20);
//	//obj.setData(1, "김철수", 20);
//	obj.getData();
//	MyClass obj2(2, "트럼프", 34);
//	obj2.getData();
//
//	return 0;
//}