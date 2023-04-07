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

	for (int t = 0; t < n; t++) {
		cout << "Data ke-" << (t + 1) << ": ";
		cin >> a[t];
	}
}

void mergeSort(int a[], int low, int high) {
	if (low >= high) {
		return;
	}

	int mid = (low + high) / 2;

	mergeSort(a, low, mid);
	mergeSort(a, mid + 1, high);

	int i = low;
	int j = mid + 1;
	int k = low;
	int B[MAKS_DATA];

	while (i <= mid && j <= high) {
		if (a[i] <= a[j]) {
			B[k] = a[i];
			i++;
		}
		else {
			B[k] = a[j];
			j++;
		}
		k++;
	}

	while (i <= mid) {
		B[k] = a[i];
		i++;
		k++;
	}
}

