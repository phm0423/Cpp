/*
* ���۷��� - ����� ���ÿ� �ʱ�ȭ�ؾ߸� �Ѵ�.
*/
#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	int& ref = num;				// num�� �޸� ������ ref��� ������ �ٴ´�.
	int* pn = &num;				// ������ ����
	//int& rref;				   10���� ���� �ʱ�ȭ �Ͽ��� ��
	//rref = ref;

	num++;
	ref++;
	(*pn)++;

	cout << "num++: " << num << endl;
	cout << "ref++: " << ref << endl;
	cout << "*(pn)++: " << *pn << endl;

	cout << "&num: " << &num << endl;			//�Ʒ��ٰ� ������ �ּҰ��� ����
	cout << "&ref: " << &ref << endl;
	return 0;
}