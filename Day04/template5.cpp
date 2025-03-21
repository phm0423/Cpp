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
template<>						// 클래스 템플릿의 특수화
class CTest<char> {
private:
	char data;
public:
	CTest(char d): data(d){}
	char getData() { return data; }
};
int main()
{
	CTest<int> obj(10);			// 클래스 템플릿은 인스턴스 생성시 반드시 typename을 작성해야 한다.
	std::cout << obj.getData() << std::endl;

	CTest<char> obj2('a');
	std::cout << obj2.getData() << std::endl;

	return 0;
}