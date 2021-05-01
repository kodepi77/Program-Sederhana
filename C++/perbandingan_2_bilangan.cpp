#include <iostream>

using namespace std;

int main() {
	int bil_1, bil_2;

	cout << "Masukan Bilangan Ke-1 : ";
	cin >> bil_1;
	cout << "Masukan Bilangan Ke-2 : ";
	cin >> bil_2;

	if(bil_1 > bil_2) {
		cout << bil_1 << " Adalah Bilangan Terbesar\n";
		cout << bil_2 << " Adalah Bilangan Terkecil\n";
	}
	else if(bil_1 < bil_2) {
		cout << bil_1 << " Adalah Bilangan Terkecil\n";
		cout << bil_2 << " Adalah Bilangan Terbesar\n";
	}
	else {
		cout << "Kedua Bilangan Memiliki Nilai Sama\n";
	}
}

