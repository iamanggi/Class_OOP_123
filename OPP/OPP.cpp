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
