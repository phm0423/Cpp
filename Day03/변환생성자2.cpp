/*

*/
#include <iostream>

class Time {
private:
	int hour;
	int min;
	int sec;
public:
	Time(){}						// ����Ʈ ������
	Time(int abssec) {				// ��ȯ ������
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}
	void printTime() {
		printf("����ð��� %d�� %d�� %d�� �Դϴ�.\n", hour, min, sec);
	}
};
int main()
{
	Time now(9999);
	//Time now6611;
	now.printTime();
	return 0;
}