/*
	변환 생성자
*/
#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass();
	MyClass(int value) {
		printf("변환 생성자 호출!!\n");
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