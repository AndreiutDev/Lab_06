#include "CsvStore.h"

void CsvStore::save(vector<Film> filmList)
{
    ofstream g;
    vector<Film>::iterator pointer;
    g.open(filename, std::fstream::out);
    g << "Title,Genre,Year,Trailer Link\n";
    for (pointer = filmList.begin(); pointer < filmList.end(); pointer++) {

        std::wstring current_trailer = pointer->GetTrailer();
        std::string trailer(current_trailer.begin(), current_trailer.end());

        g << pointer->GetTitle() + ",";
        g << pointer->GetGenre() + ",";
        g << to_string(pointer->GetApparitionYear()) + ",";
        g << trailer + "\n";

    }
    g.close();
}
