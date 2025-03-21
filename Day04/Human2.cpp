/*
	Step3.
	char �������� name, intŸ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char* name;
	int age;
public:
	Human(const char* name = " ", int age = 0) {
		printf("constructor\n");
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}
	Human(const Human& other) {
		printf("copy constructor\n");
		this->name = new char[strlen(other.name) + 1];
		strncpy(this->name, other.name, strlen(other.name) + 1);
		this->age = other.age;
	}
	~Human() {
		printf("destructor~\n");
		delete[] this->name;
	}
	void showHuman() {
		printf("�̸��� %s�̰� ���̴� %d�̴�.\n", name, age);
	}
	const Human& operator=(const Human& rhs);
};
const Human& Human::operator=(const Human& rhs) {
	if (this != &rhs) {
		//delete[] this->name;
		printf("operator overloading!\n");
		this->name = new char[strlen(rhs.name) + 1];
		strcpy(this->name, rhs.name);
		this->age = rhs.age;
	}
	return* this;
}

int main()
{
	Human man("ȫ��", 30);
	man.showHuman();
	Human copyman(man);
	copyman.showHuman();
	Human xman;
	xman = copyman;
	xman.showHuman();

	return 0;
}