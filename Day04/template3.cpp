/*
	���ø� typename�� �������� ���
*/
#include <iostream>
using namespace std;

template <typename T1, typename T2>
void func(T1 a, T2 b) {
	cout << a << endl;
	cout << b << endl;
}

int main()
{
	func(10, 3.14);
	func(20, "ȫ��");
	func<const char*, double>("Hello", 3.1415);

	return 0;
}
