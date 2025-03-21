/*
	�����Լ� ������ �����ε�
*/
#include <iostream>

class Complex {
private:
	double real, image;
public:
	Complex(double r = 0, double i = 0):real(r), image(i){}
	Complex add(const Complex& other) {
		return Complex(real + other.real, image + other.image);
	}
	Complex operator+(const Complex& other) {
		return Complex(real + other.real, image + other.image);
	}
	Complex operator*(int n) {
		return Complex(real * n, image * n);
	}
	void showComplex() {
		printf("real: %.1lf, image: %.1lf\n", real, image);
	}
	/* �Լ� ������ friend ������ �ϸ� private �Ǵ� protected ����� ������ ���ȴ�. */
	friend Complex operator*(int n, const Complex& other);
	friend std::ostream& operator <<(std::ostream& out, const Complex& other);
};
inline Complex operator*(int n, const Complex& other) {
	return Complex(n * other.real, n * other.image);
}
inline std::ostream& operator <<(std::ostream& out, const Complex& other) {
	out << other.real << ", " << other.image;
	return out;
}
int main()
{
	Complex c1(1.1, 2.2);
	Complex c2(3.3, 4.4);
	Complex c3 = c1 + c2;
	c3.showComplex();
	Complex c4 = c1 * 100;
	c4.showComplex();
	Complex c5 = 100 * c3;
	c5.showComplex();

	// cout ��ü�� ���� ��ü ���
	std::cout << c1 << std::endl;			// ��¿�����(<<)�� �⺻������ ��ü�� ����� �� ����.

	return 0;
}