#include "accesFile.h"


bool accesFile::accesData(int opt) {
	if (opt == 1) {
		//html formal
		file.storeListInSpecialFormat(wishList, "HTML");
		format = "HTML";
		return true;
	}else
		if (opt == 2) {
			//csv format
			file.storeListInSpecialFormat(wishList, "CSV");
			format = "CSV";
			return true;
		}
		else {
			return false;
		}
}

void accesFile::refreshData(vector<Film> filmList) {
	this->wishList = filmList;
}

void accesFile::changeFile() {
	file.storeListInSpecialFormat(wishList, format);
	file.storeListInBasicFormat(wishList);
}

void accesFile::ShowWishListWithNewFormat() {

	if (format == "HTML") {
		LPCWSTR acces = L"open";
		ShellExecute(NULL, acces, 
			L"file:///D:/FMI/An1_Sem2/OOP/Labs/Lab6/Lab_06/Lab_06/AdminMovies.html", NULL, NULL, SW_SHOWNORMAL);
	}else
		if (format == "CSV") {
			LPCWSTR acces = L"open";
			ShellExecute(NULL, acces,
				L"file:///D:/FMI/An1_Sem2/OOP/Labs/Lab6/Lab_06/Lab_06/wishList.csv", NULL, NULL, SW_SHOWNORMAL);
		}

}