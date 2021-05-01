#include <iostream>

using namespace std;

int main() {
	float bil_1, bil_2;

	cout << "Masukan Bilangan Ke-1 : ";
	cin >> bil_1;
	cout << "Masukan Bilangan Ke-2 : ";
	cin >> bil_2;

	float tambah, kurang, kali, bagi;

	tambah = bil_1 + bil_2;
	kurang = bil_1 - bil_2;
	kali = bil_1 * bil_2;
	bagi = bil_1 / bil_2;

	cout << bil_1 << " + " << bil_2 << " = " << tambah << "\n";
	cout << bil_1 << " - " << bil_2 << " = " << kurang << "\n";
	cout << bil_1 << " * " << bil_2 << " = " << kali << "\n";
	cout << bil_1 << " / " << bil_2 << " = " << bagi << "\n";
}
