/*

*/
#include <iostream>

class Base {
public:
	void func1() { std::cout << "Base::func1()" << std::endl; }
};
class Derived :public Base {
public:
	void f() { std::cout << "Derived::func()" << std::endl; }
	void func() { std::cout << "Derived::func1()" << std::endl; }
};
class Derived2 :public Derived {
public:
	void func() { std::cout << "Derived::func()" << std::endl; }
	void func2() { std::cout << "Derived::func22()" << std::endl; }
};
int main()
{
	Base* bptr;
	Derived dobj;
	bptr = static_cast<Base*>(&dobj);				// upcasting

	Base bobj;
	Derived* dptr;
	dptr = static_cast<Derived*>(&bobj);
	dptr->func();
	dptr->func1();

	Derived2* dptr2 = static_cast<Derived2*>(dptr);
	dptr->func();
	dptr->func1();

	return 0;
}