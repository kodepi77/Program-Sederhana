#include <iostream>

using namespace std;

int main() {
	int size = 5;

	for(int row=1; row<=size; row++) {
		for(int col=1; col<=row-1; col++) {
			cout << "  ";
		}
		for(int col=1; col<=size-row+1; col++) {
			cout << "* ";
		}
		cout << "\n";
	}
}
