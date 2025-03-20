/*
	(deep copy)복사 생성자
	동적할당 받은 경우
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* name, int age) {
		printf("constructor call!!\n");
		this->name = new char[strlen(name) + 1];				// 복사생성자에 동적할당을 넣지 않으면 얕은 copy
		strcpy(this->name, name);								
		this->age = age;
	}

	Person(const Person& other) {			// 복사 생성자 , 객체가 매개변수로 가는 경우 참조
		printf("copy constructor!!\n");
		this->name = new char[strlen(other.name) + 1];			// 복사생성자에도 동적할당을 넣은경우는 깊은copy
		strncpy(this->name, other.name, strlen(other.name) + 1);
		this->age = other.age;
	}
	~Person() {
		delete[] this->name;
		printf("delete constructor\n");
	}

	void printPerson() {
		printf("name: %s, age: %d\n", this->name, this->age);
	}
};

int main() 
{
	Person p("홍길동", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}
/*
	디폴트로 자동으로 제공받는 생성자: 디폴트 생성자, 복사 생성자, 소멸자,
*/