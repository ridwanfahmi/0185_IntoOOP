#include <iostream>
using namespace std;

class Mahasiswa {
public:   //akses modifier
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "nama: " << nama << endl;
		cout << "umur: " << umur << endl;
		cout << "jurusan: " << jurusan << endl;
	}

};


class Matakuliah {
private:
	string kodeMK;
	string namaMK;
	int sks;
public:
	void input() {
		cout << "Kode MK: ";
		cin >> kodeMK;
		cout << "Nama MK: ";
		cin >> namaMK;
		cout << "SKS: ";
		cin >> sks;
	}

	void output() {
		cout << "Kode MK: " << kodeMK << endl;
		cout << "Nama MK: " << namaMK << endl;
		cout << "SKS: " << sks << endl;
	}
};

int main() {
	
}