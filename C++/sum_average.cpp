#include <iostream>

using namespace std;

int main() {
	int jumlah_bil;

	cout << "Masukan Jumlah Bilangan : ";
	cin >> jumlah_bil;

	int sum = 0;
	float average;

	for(int i=1; i<=jumlah_bil; i++) {
		int bil;
		cout << "Masukan Bilangan Ke-" << i << " : ";
		cin >> bil;
		sum += bil;
	}
	average = float(sum) / jumlah_bil;
	cout << "Total = " << sum << "\n";
	cout << "Rata-Rata = " << average << "\n";
}
