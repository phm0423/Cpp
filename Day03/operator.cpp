/*
	연산자 오버로딩(다중정의)
*/
#include <iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
		printf("construct call!!\n");
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
	Point add(const Point& other) {						// copyconsturctor2 내용참고
		printf("add() call!!\n");
		return Point(x + other.x, y + other.y);
	}
};

int main()
{
	Point obj1(10, 20);
	obj1.showPoint();
	Point obj2(30, 40);
	obj2.showPoint();
	Point obj3;
	obj3 = obj1.add(obj2);
	obj3.showPoint();

	return 0;
}