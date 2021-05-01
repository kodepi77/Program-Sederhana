#include <iostream>

using namespace std;

int main() {
	// Rumus Persegi
	// Luas = Sisi x Sisi
	// Keliling = 4 x Sisi

	int sisi;

	cout << "Masukan Sisi Persegi : ";
	cin >> sisi;

	int luas, keliling;

	luas = sisi * sisi;
	keliling = 4 * sisi;

	cout << "Luas = " << luas << "\n";
	cout << "Keliling = " << keliling << "\n";
}

