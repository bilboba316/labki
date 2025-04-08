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
		cout << category << endl;
		cout << name << endl;
		cout << price << endl;
		cout << endl;
	}
};

int main() {
	product apelsin;
	apelsin.category = "citrus";
	apelsin.name = "apelsin";
	apelsin.price = randomPrice();

	product lemon;
	lemon.category = "citrus";
	lemon.name = "lemon";
	lemon.price = randomPrice();

	product apple;
	apple.category = "fruit";
	apple.name = "apple";
	apple.price = randomPrice();

	product cucumber;
	cucumber.category = "vegetable";
	cucumber.name = "cucumber";
	cucumber.price = randomPrice();

	apelsin.get_info();
	apple.get_info();
	lemon.get_info();
	cucumber.get_info();
}