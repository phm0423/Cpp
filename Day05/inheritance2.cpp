/*
	protected 접근제어는 상속받은 자식이 접근 가능하다.
*/
#include <iostream>
#include <string.h>
using namespace std;

class Human {
protected:
	char name[20];
	int age;
public:
	Human(const char* aname, int aage) {
		strcpy_s(name, aname);
		age = aage;
	}
	void getData() {
		cout << "이름: " << name << ", 나이: " << age << endl;
	}
};
class Student : public Human {
private:
	int studentID;
public:
	Student(const char* aname, int aage, int astudentID) : Human(aname, aage) {
		//strcpy(name, aname);
		//age = aage;
		studentID = astudentID;	
	}
	void showStudent() {
		cout << "이름: " << name << ", 나이: " << age;
		cout << ", 학번: " << studentID << endl;

	}
};

int main()
{
	Human h("홍길동", 25);
	h.getData();

	Student h2("임꺽정", 30, 202503);
	h2.getData();
	h2.showStudent();
	return 0;
}