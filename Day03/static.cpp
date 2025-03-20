/*
	static - Ŭ�������� �����Ѵ�.(this �����Ͱ� ����.)- ��ü�� ����� �ƴϴ�. - ��ü���� �����Ѵ�.
*/
#include <iostream>
using namespace std;

class StaticTest {
public:
	int n;
	static int static_n;			// static ��� ����
	StaticTest();
	void print();
};
int StaticTest::static_n = 10;		// static ��� ���� �ʱ�ȭ�� Ŭ���� �ܺο��� �̷������ �Ѵ�.
StaticTest::StaticTest() {
	n = 20;
	//static_n = 10;
}
void StaticTest::print() {
	cout << "Stataic_n: " << static_n << " n: " << n << endl;
}

int main()
{
	StaticTest ob1, ob2;
	ob1.print();
	ob2.print();

	ob2.static_n = 1000;			// ��ü���� �����Ѵ�.
	ob2.n = 50;
	ob2.print();
	ob1.print();

	return 0;
}