///*
//	�����ڻ��
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
//	//char name[20];	// �����Ҵ���Myclass3����
//	char* name;
//	int age;
//public:
//	MyClass() {}		// ����Ʈ ������
//	MyClass(int _id, const char* _name, int _age);
//
//	/*void setData(int _id, const char* _name, int _age) {
//		id = _id;
//		strcpy(name, _name);
//		age = _age;*/
//
//	void getData() const;
//	
//	~MyClass() {		// �Ҹ���(�ڵ�ȣ��ȴ�. - �����Ҵ� ��� ����� ������ �ۼ���  �ʿ䰡 ����.)
//		delete[] name;
//	}
//};
//MyClass::MyClass(int _id, const char* _name, int _age) {
//	id = _id;
//	name = new char[strlen(_name) + 1];		// �����Ҵ�
//	//name = _name;				// �迭�� ������ �Ŀ� ���� �����ڸ� ����Ͽ� ���� ���� �Ҵ��� �� ����.
//	strcpy(name, _name);
//	age = _age;
//}
//void MyClass::getData() const{					// ��� ����Լ�(��� ��� ������ ���ȭ ��Ų��.
//	cout << "id: " << id << ", " << "�̸�: " << name << ", " << "���� : " << age << endl;
//}
//int main()
//{
//	MyClass obj(1, "��ö��", 20);	// �����Ҵ翡 ����
//	//obj.setData(1, "��ö��", 20);
//	obj.getData();
//	MyClass obj2(2, "Ʈ����", 34);
//	obj2.getData();
//
//
//	return 0;
//}