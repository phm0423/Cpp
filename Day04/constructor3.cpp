/*
	객체를 더하는 함수 add()
	참조를 리턴한다.
*/
#include <iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) :x(ax), y(ay) {
		printf("constructor\n");
	}
	Point(const Point& other) {
		printf("copy constructor\n");
		x = other.x;
		y = other.y;
	}
	Point& add(const Point& other) {				// 참조 위해 & 추가
		printf("add()\n");
		// return Point(x + other.x, y + other.y);
		/* 참조로 리턴한다. */
		x = x + other.x;
		y = y + other.y;
		return *this;
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
};

int main()
{
	Point p1(10, 20);
	Point p2(30, 40);
	std::cout << "++++++++++" << std::endl;
	/*Point p3;
	p3 = p1.add(p2);
	p3.showPoint();
	*/
	Point p3 = p1.add(p2);				// 복사 생성자 호출하여 p3 생성
	p3.showPoint();
	return 0;
}