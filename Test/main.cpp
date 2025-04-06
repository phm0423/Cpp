// main

#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include "Product.h"
using namespace std;

int main() {
	vector<shared_ptr<Product>> products;
// 상품 생성 및 추가
	products.push_back(make_shared<Book>("B001", 20000, "BookPub", "괴테", "파우스트"));
	products.push_back(make_shared<HandPhone>("H001", 800000, "Samsung", "Galaxy S21"));
	products.push_back(make_shared<Computer>("C001", 350000, "AMD", "7800X3D", 16));
	products.push_back(make_shared<Book>("B002", 12000, "BookPub", "단테", "신곡"));

	// 전체 상품 출력
	cout << "\n[전체 상품 출력]\n";
	for (const auto& product : products)
		cout << *product;

	// 상품 ID 비교
	cout << "\n[상품 ID 비교]\n";
	if (*products[0] == *products[3])
		cout << "같은 상품입니다.\n";
	else
		cout << "서로 다른 상품입니다.\n";

	// 가격 기준 정렬 전
	cout << "\n[정렬 전]\n";
	for (const auto& product : products)
		cout << *product;

	// 가격 기준 정렬
	sort(products.begin(), products.end(),
		[](const shared_ptr<Product>& a, const shared_ptr<Product>& b) {
			return *a < *b;
		});
	// 가격 기준 정렬 후 출력
	cout << "\n[가격 오름차순 정렬후]\n";
	for (const auto& product : products)
		cout << *product;


	return 0;
}