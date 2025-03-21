/*

*/
#include <iostream>

template<typename T1>
class CTest {
private:
	T1 num;
public:
	//CTest(T1 n) : num(n) {}
	CTest(T1);
	T1 getData() { return num; }
};
template<>						// Ŭ���� ���ø��� Ư��ȭ
class CTest<char> {
private:
	char data;
public:
	CTest(char d): data(d){}
	char getData() { return data; }
};
int main()
{
	CTest<int> obj(10);			// Ŭ���� ���ø��� �ν��Ͻ� ������ �ݵ�� typename�� �ۼ��ؾ� �Ѵ�.
	std::cout << obj.getData() << std::endl;

	CTest<char> obj2('a');
	std::cout << obj2.getData() << std::endl;

	return 0;
}