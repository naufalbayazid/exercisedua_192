#include <iostream>
#include <string>
#include <vector>

class penerbit;
class pengarang {
public:
	Pengarang(const std::string& nama) : namaPengarang(nama) {}:
	std::string getNamaPengarang() const {
		return namaPengarang;
	}

	