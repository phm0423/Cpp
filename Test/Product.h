// Product.h

#pragma once
#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Product {
protected:
	string id;			// 상품 고유 ID
	int price;			// 상품 가격
	string producer;	// 제조사

public:
	// 생성자
	Product(string _id, int _price, string _producer);

	// 출력함수 가상함수로 선언
	virtual void display() const;

	// 상품 ID 비교용
	bool operator==(const Product& other)const;

	// 가격 비교용
	bool operator<(const Product& other)const;

	// 가상 소멸자
	virtual ~Product();
};
// 출력 연산자 오버로딩 함수 선언
ostream& operator<<(ostream& os, const Product& product);

class Book : public Product {
	string author;	// 저자
	string title;	// 책 제목
public:
	Book(string _id, int _price, string _producer, string _author, string _title);
	void display() const override;
};

class HandPhone : public Product {
	string model;	// 모델명
public:
	HandPhone(string _id, int _price, string _producer, string _model);
	void display() const override;
};

class Computer : public Product {
	string cpu;		// CPU 모델
	int ram;		// RAM 크기
public:
	Computer(string _id, int _price, string _producer, string _cpu, int _ram);
	void display() const override;
};