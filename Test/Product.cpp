// Product.cpp

#include "Product.h"

// 생성자
Product::Product(string _id, int _price, string _producer): id(_id), price(_price), producer(_producer){}

// 기본 정보 출력
void Product::display()const {
	cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer;
}

// 상품ID 같은지 비교
bool Product::operator==(const Product& other)const {
	return id == other.id;
}

// 가격 비교용
bool Product::operator<(const Product& other)const {
	return price < other.price;
}

// 가상 소멸자
Product::~Product(){}

ostream& operator<<(ostream& os, const Product& product) {
	product.display();
	return os;
}

Book::Book(string _id, int _price, string _producer, string _author, string _title):Product(_id, _price, _producer), author(_author), title(_title){}

void Book::display() const {
	Product::display();
	cout << ", Author: " << author << ", Title: "<<title << endl;
}

HandPhone::HandPhone(string _id, int _price, string _producer, string _model): Product(_id, _price, _producer), model(_model){}

void HandPhone::display()const {
	Product::display();
	cout << ", Model: " << model << endl;
}

Computer::Computer(string _id, int _price, string _producer, string _cpu, int _ram): Product(_id, _price, _producer), cpu(_cpu), ram(_ram){}

void Computer::display()const {
	Product::display();
	cout << ", CPU: " << cpu << ", RAM: " << ram << "GB" << endl;
}