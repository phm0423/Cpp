/*
	C++ class
*/
#include <iostream>

class Human {
public:
	char name[20];
	int age;
	char job[10];

	Human() {}			// 디폴트 생성자
	
	void showHuman()
	{
		printf("name: %s, age: %d, job: %s", name, age, job);
	}
};

int main()
{
	Human h = { "김철수", 30, "백수" };
	//showHuman(h);
	h.showHuman();
	return 0;
}