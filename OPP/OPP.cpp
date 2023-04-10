#include <iostream>
using namespace std;

class mahasiswa {
public:
	string nama;
	string nim;
public: 
	void cetak() {
		cout << "NIM = " << nim;
		cout << "\nNama = " << nama;
	}
};

class matakuliah {
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
		cout << "\n\nmasukan kode matakuliah : ";
		cin >> kode;
		cout << "masukan nama matakuliah : ";
		cin >> namaM;
		cout << "jumlah SKS : ";
		cin >> sks;
	}
	void tampil() {
			cout << "\nmasukan kode matakuliah : " << kode;
			cout << "\nmasukan nama matakuliah : " << namaM;
			cout << "\nSKS : " << sks;
	}
	
};

int main() {
	mahasiswa mhs1;
	matakuliah mk;

	cout << "masukan nim : ";
	cin >> mhs1.nim;
	cout << "masukan nama : ";
	cin >> mhs1.nama;
	mhs1.cetak();

	mk.input();
	mk.tampil();
}
