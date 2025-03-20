/*
*/
#include <iostream>

class AAA {
private:
	static int static_a;		// static ��� ����
	int n;
public:
	AAA(int n);
	static void setStatic_a();			// static �����Ҽ��ִ� ����Լ�
	void print();
};

int AAA::static_a = 100;				// static�� Ŭ���� �ۿ��� �ʱ�ȭ
AAA::AAA(int n) {
	this->n = n;
}
void AAA::print() {
	printf("static_a: %d, n: %d\n", static_a, n);
}
void AAA::setStatic_a() {				
	static_a = 50;
	//n = 0;				// �Ϲ� ����� ������ ������ �ʴ´�. ����ƽ ����� ��븸 �����ϴ�.
}

int main()
{
	AAA obj1(10), obj2(20);		// ��ü ������ ��������� �������� ��� �Լ��� ����
	obj1.print();
	obj2.print();

	obj1.setStatic_a();
	obj1.print();

	return 0;
}