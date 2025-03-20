/*
	이동 생성자(T&&)
	r_value reference 를 파라미터로 갖는 이동 생성자
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char name[10];
	int age;
public:
	// 입력2개 받는 생성자
	Human(const char* name, int age) {
		printf("입력 2개 생성자 호출\n");
		strcpy(this->name, name);
		this->age = age;
	}
	// 복사 생성자
	Human(const Human& other) {
		printf("복사 생성자 호출\n");
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	// 이동 생성자
	Human(Human&& other) noexcept{			// 이동중 예외발생을 방지
		printf("이동 생성자 호출\n");
		strcpy(this->name, other.name);		// 복사가 아닌 이동이므로 아래 주석과 같이 된다.
		this->age = other.age;

		//other.name = nullptr;  
		other.age = 0;
	}
	void printData() {
		printf("name: %s, age: %d\n", this->name, this->age);
	}
};
int main()
{
	Human p("트럼프", 30);
	p.printData();

	Human p2(p);
	p2.printData();

	Human p3(std::move(p));
	p3.printData();
	p.printData();

	return 0;
}