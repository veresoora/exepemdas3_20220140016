#ifndef KARANGAN_H
#define KARANGAN_H
#include "Buku.h";

class karangan {
public:
	string nama_karangan;
	vector<buku*> daftar_buku;

	karangan(string pNama) :nama_karangan(pNama) {
		cout << "Karangan \"" << nama_karangan << "\"  \n";
	}
	~karangan() {
		cout << "Karangan\"" << nama_karangan << "\" tidak ada \n";
	}

	void tambahBuku(buku*);
	void cetakBuku();
};

void karangan::tambahBuku(buku* pBuku) {
	daftar_buku.push_back(pBuku);
}

void karangan::cetakBuku() {
	cout << "\nDaftar buku yang dikarang \"" << this->nama_karangan << "\":\n";
	for (auto& a : daftar_buku) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

#endif