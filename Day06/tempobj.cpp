/*

*/
#include <iostream>
using namespace std;

class MyClass {
private:
	int num;
public:
	MyClass(int n) : num(n) {
		cout << num << " constructor" << endl;
	}
	~MyClass() { cout << num << " destructor" << endl; }
};
int main()
{
	MyClass obj{ 10 };
	MyClass obj2 = MyClass{ 20 };
	MyClass{ 30 };					// bye가 출력되기 전에 소멸됨-> 이름없는 임시객체는 이동하거나 하지않으면 다음행에서 소멸된다.

	cout << "bye~~" << endl;

	return 0;
}