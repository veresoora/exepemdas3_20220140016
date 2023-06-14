#include <iostream>
#include <vector>
using namespace std;

#include "Buku.h";
#include "Karangan.h";

class pengarang;
class penerbit {
public:
	string nama_penerbit;
	vector<pengarang*> daftar_pengarang;
	penerbit(string pNama) : nama_penerbit(pNama) {
		cout << "penerbit \"" << nama_penerbit << "\" \n";
	}
	~penerbit() {
		cout << "penerbit \"" << nama_penerbit << "\" tidak ada \n";
	}

	void tambahPengarang(pengarang*);
	void cetakPengarang();

};

class pengarang {
public:
	string nama_pengarang;
	vector<penerbit*> daftar_penerbit;
	pengarang(string pNama) : nama_pengarang(pNama) {
		cout << "pengarang \"" << nama_pengarang << "\"  \n";
	}
	~pengarang() {
		cout << "pengarang\"" << nama_pengarang << "\" tidak ada \n";
	}

	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};

void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}

void penerbit::cetakPengarang() {
	cout << "Daftar pengarang pada penerbit \"" << this->nama_penerbit << "\" : \n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama_pengarang << "\n";
	}
	cout << endl;
}

void pengarang::tambahPenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit);
}

void pengarang::cetakPenerbit() {
	cout << "Daftar penerbit yang diikuti \"" << this->nama_pengarang << "\" : \n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama_penerbit << "\n";
	}
	cout << endl;
}

int main() {
	penerbit* varPenerbit1 = new penerbit("Gama Press");
	penerbit* varPenerbit2 = new penerbit("Intan Pariwara");
	pengarang* varPengarang1 = new pengarang("Giga");
	pengarang* varPengarang2 = new pengarang("Joko");
	pengarang* varPengarang3 = new pengarang("Asroni");
	pengarang* varPengarang4 = new pengarang("Lia");
	buku* varBuku1 = new buku("Fisika");
	buku* varBuku2 = new buku("Algoritma");
	buku* varBuku3 = new buku("Basisdata");
	buku* varBuku4 = new buku("Dasar Pemrograman");
	buku* varBuku5 = new buku("Matematika");
	buku* varBuku6 = new buku("Multimedia 1");
	karangan* varKarangan1 = new karangan("Joko");
	karangan* varKarangan2 = new karangan("Lia");
	karangan* varKarangan3 = new karangan("Asroni");
	karangan* varKarangan4 = new karangan("Giga");

	varPenerbit1->tambahPengarang(varPengarang2);
	varPenerbit1->tambahPengarang(varPengarang4);
	varPenerbit1->tambahPengarang(varPengarang1);
	varPenerbit2->tambahPengarang(varPengarang3);
	varPenerbit2->tambahPengarang(varPengarang1);
	varPengarang1->tambahPenerbit(varPenerbit1);
	varPengarang1->tambahPenerbit(varPenerbit2);
	varKarangan1->tambahBuku(varBuku1);
	varKarangan1->tambahBuku(varBuku2);
	varKarangan2->tambahBuku(varBuku3);
	varKarangan3->tambahBuku(varBuku4);
	varKarangan4->tambahBuku(varBuku5);
	varKarangan4->tambahBuku(varBuku6);

	varPenerbit1->cetakPengarang();
	varPenerbit2->cetakPengarang();
	varPengarang1->cetakPenerbit();
	varKarangan1->cetakBuku();
	varKarangan2->cetakBuku();
	varKarangan3->cetakBuku();
	varKarangan4->cetakBuku();

	delete varPenerbit1;
	delete varPenerbit2;
	delete varPengarang1;
	delete varPengarang2;
	delete varPengarang3;
	delete varPengarang4;
	delete varBuku1;
	delete varBuku2;
	delete varBuku3;
	delete varBuku4;
	delete varBuku5;
	delete varBuku6;
	delete varKarangan1;
	delete varKarangan2;
	delete varKarangan3;
	delete varKarangan4;
	
	return 0;

}