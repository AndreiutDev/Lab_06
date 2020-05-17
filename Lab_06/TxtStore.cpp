#include "TxtStore.h"
void TxtStore::save(vector<Film> filmList)
{
    ofstream g;
    vector<Film>::iterator ptr;
    g.open("wishList.txt", std::fstream::out);
    for (ptr = filmList.begin(); ptr < filmList.end(); ptr++)
    {
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
    g.close();
}
