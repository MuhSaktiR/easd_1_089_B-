#include <iostream>
using namespace std;

//1. algoritma memiliki pengertian, urutan, langkah-langkah, tahapan-tahapan yang dapat dilakukan untuk menyelesaikan suatu masalah secara berurutan. Karena, jika kita memecahkan masalah dengan asal-asalan tanpa langkah-langkah (algoritma) yang tepat, 
//maka sudah dipastikan masalah tersebut akan berantakan karena tidak tersusun dengan rapi. Dengan menyelesaikan masalah menggunakan algoritma, sebesar apapun masalah yang dihadapi akan lebih mudah untuk diselesaikan. Karena dengan menggunakan metode ini,
//masalah akan dipecahkan secara terurut, tertahap dan lengkap satu-persatu tidak ada langkah yang tertinggal. jika tidak ada algoritma mungkin masalah bisa diselesaikan tapi bisa juga cara menyelesaikannyalah yang akan rumit.

//2. Struktur data dapat diklasifikasikan dalam dua kategori berikut:
//Static: Example – Array
//Dynamic : Example – Linked List

//3. Pengaruh Kecepatan mesin
//Pengaruh dari Penyusun / Compiler
//Sistem operasi yang digunakan
//Bahasa pemrograman
//Memasukan data / input data ke dalam program

//4.Merge sort merupakan algoritma pengurutan dalam ilmu komputer yang dirancang untuk memenuhi 
//kebutuhan pengurutan atas suatu rangkaian data yang tidak memungkinkan untuk ditampung dalam memori 
//komputer karena jumlahnya yang terlalu besar.

//5. Yang memakai Quadratic yaitu Bubble, Selection, dan Insertion Sort
//Sedangkan yang memakai Loglinear Merge dan Qucik sort

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

	while (j <= high) {
		B[k] = a[j];
		j++;
		k++;
	}

	for (int t = low; t <= high; t++) {
		a[t] = B[t];
	}
}

void display(int a[], int n) {
	cout << "\n====================" << endl;
	cout << "Setelah diurutkan:" << endl;
	cout << "====================\n" << endl;
	for (int t = 0; t < n; t++) {
		cout << "Data ke-" << (t + 1) << ": " << a[t] << endl;
	}
}

int main() {
	int n;
	int a[MAKS_DATA];

	input(a, n);
	mergeSort(a, 0, n - 1);
	display(a, n);

	return 0;
}

