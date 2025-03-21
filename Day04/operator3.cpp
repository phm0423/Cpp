/*
	����Լ� ������ �����ε�: p1 operator������(p2) ex) p1 operator+(p2)
*/
#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int n): value(n){}
	MyClass operator+(const MyClass& other) {			// ������ �����ε�
		printf("+ overloading\n");
		return MyClass(value + other.value);
	}

	void showMyClass() {
		printf("value: %d\n", value);
	}

};

int main()
{
	MyClass obj1(10);				// �ʱⰪ�� ������ ��ü ����
	obj1.showMyClass();

	MyClass obj2(obj1);				// obj�� �����ؼ� ��ü ����
	obj2.showMyClass();

	MyClass obj3 = obj2;			// ���Կ����� ���� - ����  - obj3 �ʱ�ȭ��Ű�鼭 �����Ͽ� ��ü ����
	obj3.showMyClass();

	MyClass obj4 = obj1 + obj2 + obj3;		// + �� �⺻������ �������� �ʴ� ������ - ��ü�� ���� ����� ������ ��ü ����
	//MyClass obj4 = (obj1.operator+(obj2)).operator+(obj3);
	obj4.showMyClass();

	return 0;
}