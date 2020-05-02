#include "Film.h"
#include "FilmRepo.h"
#include <windows.h>
#include <atlstr.h>

FilmRepo::FilmRepo()
{
	this->readFromFile();
}

bool FilmRepo::filmAdd(Film f)
{
	std::vector<Film>::iterator ptr = search(f);
	if (ptr != filmList.end())
		return false;
	filmList.push_back(f);
	return true;
}

std::vector<Film>::iterator FilmRepo::search(Film f)
{
	std::vector<Film>::iterator ptr;
	for (ptr = filmList.begin(); ptr < filmList.end(); ptr++)
	{
		if (f.GetTitle() == ptr->GetTitle() && f.GetApparitionYear() == ptr->GetApparitionYear())
		{
			return ptr;
		}
	}
	return ptr;
}

bool FilmRepo::filmDelete(Film f)
{
	std::vector<Film>::iterator ptr = search(f);
	if (ptr == filmList.end())
		return false;
	filmList.erase(ptr);
	return true;
}

void FilmRepo::updateLikes(Film f, bool likeOrDislike) {

	std::vector<Film>::iterator ptr = search(f);
	ptr->SetLikeAmountint(300);
}

bool FilmRepo::updateFilm(Film f, Film newf)
{
	std::vector<Film>::iterator ptr = search(f);
	if (ptr == filmList.end())
		return false;
	else {
		filmList.erase(ptr);
		filmList.push_back(newf);
		return true;
	}
}

std::vector<Film> FilmRepo::ShowMovies(std::string genre) {

	std::vector<Film>::iterator ptr;
	std::vector<Film> genre_list;
	bool ok = false;

	for (ptr = filmList.begin(); ptr < filmList.end(); ptr++) {
		if (ptr->GetGenre() == genre) {
			genre_list.push_back(*ptr);
			ok = true;
		}
	}
	if (ok == false) {
		genre_list = this->filmList;
	}

	return genre_list;
}

void FilmRepo::readFromFile() {

	std::ifstream f("AdminMovies.txt");

	std::string title, genre, trailer;
	int year, likes;
	while (std::getline(f >> std::ws, title)) {

		//std::getline(f >> std::ws, title);
		f >> genre >> year >> likes >> trailer;
		std::wstring temp(trailer.length(), L' ');
		std::copy(trailer.begin(), trailer.end(), temp.begin());
		Film f = Film(title, genre, year, likes, temp);

		this->filmAdd(f);
	}
	f.close();
}

void FilmRepo::writeFile() {
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

		std::cout << ptr->GetTitle()<<'\n';

	}

	printf("Bobilobi");
	g.close();

	g << "Cioaba";
}

FilmRepo::~FilmRepo()
{
	this->filmList.clear();
}