#include "FileClass.h"

//void FileClass::readFromFile(function<void(Film f)> action) {
/*void FileClass::readFromFile() {

	std::ifstream f("AdminMovies.txt");

	std::string title, genre, trailer;
	int year, likes;
	while (std::getline(f >> std::ws, title)) {

		//std::getline(f >> std::ws, title);
		f >> genre >> year >> likes >> trailer;
		std::wstring temp(trailer.length(), L' ');
		std::copy(trailer.begin(), trailer.end(), temp.begin());
		Film f = Film(title, genre, year, likes, temp);

		action(f);
	}
	f.close();
}

void FileClass::writeFile() {
	std::ofstream g;
	g.open("AdminMovies.txt", std::fstream::out);

	std::vector<Film>::iterator ptr;
	for (ptr = filmList.begin(); ptr < filmList.end(); ptr++) {

		g << ptr->GetTitle() << '\n';
		g << ptr->GetGenre() << '\n';
		g << ptr->GetApparitionYear() << '\n';
		g << ptr->GetLikeAmount() << '\n';

		std::wstring trailer_bun = ptr->GetTrailer();
		std::string temp(trailer_bun.length(), ' ');
		std::copy(trailer_bun.begin(), trailer_bun.end(), temp.begin());

		g << temp << '\n';

		std::cout << ptr->GetTitle() << '\n';

	}

	printf("Bobilobi");
	g.close();

	g << "Cioaba";
}*/

