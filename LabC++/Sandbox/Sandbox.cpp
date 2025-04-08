#include <iostream>

using namespace std;

double randomPrice() {
	double price = 10.0 + (rand() % 90) + (rand() % 100) / 100.0;
	return price;
}

struct product {
	string category;
	string name;
	double price;

	void get_info() {
		printf("Name: %s\n", name.c_str());
		printf("Category: %s\n", category.c_str());
		printf("Price: %.2f\n", price);
		printf(".....\n");
	}
};

product create_product(string category, string name) {
	double price = randomPrice();
	return { category, name, price };
}

int main() {
	product appelsin = create_product("fruit", "appelsin");

	product lemon = create_product("fruit", "lemon");

	product apple = create_product("fruit", "apple");

	product cucumber = create_product("vegetable", "cucumber");

	appelsin.get_info();
	apple.get_info();
	lemon.get_info();
	cucumber.get_info();
}