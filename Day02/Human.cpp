/*
	step1.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(){}
	Human(const char* _pname, int _age, const char* _ptel);
	~Human(){
		delete[] pname;
		delete[] ptel;
	}
	void getData(){
		cout << "�̸�: " << pname << endl << "����: " << age << endl << "��ȭ��ȣ: " << ptel << endl;
	}
};
Human::Human(const char* _pname, int _age, const char* _ptel) {
	pname = new char[strlen(_pname) + 1];
	strcpy(pname, _pname);
	age = _age;
	ptel = new char[strlen(_ptel) + 1];
	strcpy(ptel, _ptel);
}

int main()
{
	Human h("ȫ�浿", 30, "010-1234-5678");
	h.getData();
}