/*
	Step3.
	char 포인터의 name, int타임의 age, 출력을 담당하는 showHuman()을 가지는 Human 클래스가 있다.
	name을 동적할당하고 나이 30, 이름 홍명보인 man 객체를 생성하시오.
	man 객체를 복사하여 copyman 객체를 생성하시오.
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
		printf("이름은 %s이고 나이는 %d이다.\n", name, age);
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
	Human man("홍명보", 30);
	man.showHuman();
	Human copyman(man);
	copyman.showHuman();
	Human xman;
	xman = copyman;
	xman.showHuman();

	return 0;
}