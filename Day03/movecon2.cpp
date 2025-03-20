/*
	�̵� ������(T&&)
	r_value reference �� �Ķ���ͷ� ���� �̵� ������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char name[10];
	int age;
public:
	// �Է�2�� �޴� ������
	Human(const char* name, int age) {
		printf("�Է� 2�� ������ ȣ��\n");
		strcpy(this->name, name);
		this->age = age;
	}
	// ���� ������
	Human(const Human& other) {
		printf("���� ������ ȣ��\n");
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	// �̵� ������
	Human(Human&& other) noexcept{			// �̵��� ���ܹ߻��� ����
		printf("�̵� ������ ȣ��\n");
		strcpy(this->name, other.name);		// ���簡 �ƴ� �̵��̹Ƿ� �Ʒ� �ּ��� ���� �ȴ�.
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
	Human p("Ʈ����", 30);
	p.printData();

	Human p2(p);
	p2.printData();

	Human p3(std::move(p));
	p3.printData();
	p.printData();

	return 0;
}