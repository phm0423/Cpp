/*
	��ȯ ������
*/
#include <iostream>

class MyClass {
private:
	int value;
public:
	explicit MyClass(int value) {
		printf("��ȯ ������ ȣ��!!\n");
		this->value = value;
	}
	void printMyClass() {
		printf("value: %d\n", value);
	}
};

int main()
{
	//MyClass obj = 10;			// ��ȯ������ ȣ��-��ü�� ��ȯ�� �Ͼ
	//obj.printMyClass();

	MyClass obj2(10);
	obj2.printMyClass();

	return 0;
}