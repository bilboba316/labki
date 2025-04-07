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

	apelsin.get_info();
}