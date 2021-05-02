#include <iostream>

using namespace std;

int main() {
	int bilangan;

	cout << "Masukan Bilangan : ";
	cin >> bilangan;

	if(bilangan % 2 == 0) {
		cout << bilangan << " Adalah Bilangan Genap";
	}
	else {
		cout << bilangan << " Adalah Bilangan Ganjil";
	}
}
