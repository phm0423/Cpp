/*
	��ȯ ������
*/
#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass();
	MyClass(int value) {
		printf("��ȯ ������ ȣ��!!\n");
		this->value = value;
	}
	void printMyClass() {
		printf("value: %d\n", value);
	}
};

int main()
{
	MyClass obj = 10;
	obj.printMyClass();

	MyClass obj2(10);
	obj.printMyClass();

	return 0;
}