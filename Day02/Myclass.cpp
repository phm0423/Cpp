///*
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	char name[20];
//	int age;
//public:
//	void setData(int _id, const char* _name, int _age) {
//		id = _id;
//		// �ּ� = rvalue
//		strcpy(name, _name);
//		/*
//		name[0] = 'a';
//		name[1] = 'b'; ��ĵ� ����
//		*/
//		age = _age;
//	}
//	void getData() {
//		cout << "id: " << id << ", " << "�̸�: " << name << ", " << "���� : " << age << endl;
//	}
//};
//int main()
//{
//	MyClass obj;
//	obj.setData(1, "��ö��", 20);
//	obj.getData();
//
//	return 0;
//}