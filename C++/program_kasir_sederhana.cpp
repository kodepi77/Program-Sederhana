#include <iostream>

using namespace std;

int main() {
	int total, bayar, kembalian;

	cout << "-- Kasir Sederhana --\n";
	cout << "Masukan Jumlah yang Dipesan\n";

	int bakso;
	cout << "Bakso Rp 10.000 : ";
	cin >> bakso;
	total += bakso * 10000;

	int mie;
	cout << "Mie Pangsit Rp 8.000 : ";
	cin >> mie;
	total += mie * 8000;

	int teh;
	cout << "Es Teh Rp 3.000 : ";
	cin >> teh;
	total += teh * 3000;
	cout << "---------------------\n";
	cout << "Total = " << total << "\n";
	cout << "Jumlah Bayar = ";
	cin >> bayar;
	kembalian = bayar - total;
	cout << "Kembalian = " << kembalian << "\n";
}
