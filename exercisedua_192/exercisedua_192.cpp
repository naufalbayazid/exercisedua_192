#include <iostream>
#include <string>
#include <vector>

class penerbit;
class pengarang {
public:
	Pengarang(const std::string& nama) : namaPengarang(nama) {} :
		std::string getNamaPengarang() const {
		return namaPengarang;
	} 

	void tambahkanPenerbit(Penerbit* penerbit) {
		penerbitPengarang.push_back(penerbit);
	}

	void tambahkanBuku(const std::string& judul) {
		bukuPengarang.push_back(judul);
	}

	void tampilkanPenerbit() const {
		std::cout << "Daftar penerbit \"" << namaPengarang << "\":" << ::endl;
		for (cons auto& penerbit : penerbitPengarang) {
			std::cout << penerbit->masukkanNamaPenerbit() << endl;
		}
	}
		