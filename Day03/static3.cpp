/*
	StaticTest��� Ŭ������ ����� ��������δ� �̸�, ��ȭ��ȣ, �ּ�, ȸ����ȣ(cnt)�� ������ 
	3�� �Է��� �޴� �����ڸ� �ۼ��Ѵ�. ȸ����ȣ�� �ڵ����� ������ų ���̱� ����
	�޼��� showmember()
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class StaticTest {
private:
	char name[20];
	char phone[20];
	char addr[100];
	static int cnt;
public:
	StaticTest(const char* name, const char* phone, const char* addr);
	void showmember() {
		cnt++;
		std::cout << "ȸ����ȣ: " << cnt << std::endl;
		printf("�̸�: %s, ��ȭ��ȣ: %s, �ּ�: %s\n", name, phone, addr);
	}
};
int StaticTest::cnt = 0;

StaticTest::StaticTest(const char* name, const char* phone, const char* addr) {
	strcpy(this->name, name);
	strcpy(this->phone, phone);
	strcpy(this->addr, addr);

}

int main()
{
	StaticTest m1("ȫ�浿", "010-1111-1111", "�λ�");
	m1.showmember();
	StaticTest m2("�迵��", "010-2222-2222", "�λ�");
	m2.showmember();
	StaticTest m3("��ö��", "010-3333-3333", "���");
	m3.showmember();


	return 0;
}