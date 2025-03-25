/*
	스마트 포인터: unique_ptr
*/
#include <iostream>
using namespace std;

class MyClass {
public:
	MyClass() { cout << "MyClass() 호출" << endl; }
	~MyClass() { cout << "~MyClass() 호출" << endl; }
};

int main()
{
	unique_ptr<MyClass> ptr(new MyClass{});
	unique_ptr<MyClass> ptr2 = move(ptr);
	return 0;
}