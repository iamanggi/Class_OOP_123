#include <iostream>
using namespace std;

class mahasiswa {
public:
	string nama;
	string nim;
public: 
	void cetak() {
		cout << "NIM = " << nim;
		cout << "\n Nama = " << nama;
	}
};

class matakuliah {
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
		cout << "masukan kode matakuliah : ";
		cin >> kode;
		cout << "\nmasukan nama matakuliah : ";
		cin >> namaM;
		cout << "SKS : ";
		cin >> sks;
	}
		void tampil() {
			cout << "masukan kode matakuliah : " << kode;
			cout << "masukan nama matakuliah : " << namaM;
			cout << "SKS : " << sks;
		}
	
};
