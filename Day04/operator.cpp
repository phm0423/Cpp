/*
*/
#include <iostream>

class MyClass {
private:
	int m_a, m_b;
	// const char* m_name;
public:
	MyClass(int a = 0, int b = 0/*, const char* name = nullptr*/) : m_a(a), m_b(b) /*m_name(name)*/ {}
	void showMyClass() {
		std::cout << m_a << ", " << m_b /* << ", " << m_name */<< std::endl;
	}
};

int main()
{
	//MyClass obj1{ 1, 2/*, "ȫ�浿"*/};
	//obj1.showMyClass();

	//MyClass obj2;
	//obj2 = obj1;						// num = 10; - ���縦 ���� ��������� ������ �ִ� ���� ����
	//obj2.showMyClass();					// �����ε����� ������

	MyClass obj1{ 10, 20 };
	MyClass obj2{ 30, 40 };
	//MyClass obj3 = obj1 + obj2;			// ������ �����ε� �ʿ�


	return 0;
}