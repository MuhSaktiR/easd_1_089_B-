#include <iostream>
using namespace std;

const int MAKS_DATA = 109; // maksimum data dari 2 digit nim akhir (89) + 20 - 2 * 15 + 10 + 20
const string INISIAL = "SR"; // Untuk nanti mengganti "j" menjadi 2 inisial SR
const string NICKNAME = "Sakti"; // Untuk mengganti "arr" menjadi nama panggilan Sakti

void input(int a[], int& n) {
	cout << "Masukkan jumlah data (maksimum " << MAKS_DATA << "): ";
	cin >> n;

	if (n > MAKS_DATA) {
		cout << "Jumlah data terlalu banyak. Maksimum data adalah " << MAKS_DATA << "." << endl;
		exit(0); // terminate the program
	}
}

