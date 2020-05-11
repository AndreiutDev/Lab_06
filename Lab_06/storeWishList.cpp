#include "storeWishList.h"

storeWishList::storeWishList() {

}

void storeWishList::storeListInSpecialFormat(std::vector<Film> filmList, std::string storage_mode) {
    
    if (storage_mode == "HTML")
    {
        saveAsHtml(filmList);
    }
    else if (storage_mode == "CSV")
    {
        saveAsCsv(filmList);
    }
}

void storeWishList::saveAsHtml(std::vector<Film> filmList) {
    ofstream g;
    vector<Film>::iterator pointer;
    g.open("AdminMovies.html", std::fstream::out);
    g << "<!DOCTYPE html>\n"
        "<html>\n"
        "<head>\n"
        "<style>\n"
        "table{\n"
        "font - family: arial, sans - serif;\n"
        "border - collapse: collapse;\n"
        "width: 100 %;\n"
        "}\n"

        "td, th{\n"
        "border: 1px solid #dddddd;\n"
        "text - align: left;\n"
        "padding: 8px;\n"
        "}\n"

        "tr:nth - child(even) {\n"
        "background - color: #dddddd;\n"
        "}\n"
        "</style>\n"
        "</head\n>"
        "<body\n>"
        "<h2>HTML Table</h2>\n"
        "<table>\n"
        "<tr> \n"
        "<th>Movie Title</th>\n"
        "<th>Genre</th>\n"
        "<th>Apparition year</th>\n"
        "<th>Trailer</th>\n"
        "</tr>\n";
    for (pointer = filmList.begin(); pointer < filmList.end(); pointer++)
    {
        std::wstring current_trailer = pointer->GetTrailer();
        std::string trailer(current_trailer.begin(), current_trailer.end());
        g <<

            "<tr>\n"
            "<td>" + pointer->GetTitle() + "</td>\n"
            "<td>" + pointer->GetGenre() + "</td>\n"
            "<td>" + to_string(pointer->GetApparitionYear()) + "</td>\n"
            "<td><a href = '" + trailer + "'>Link</a></td>\n"
            "</tr>\n";
    }
    g << "</table>\n"
        "</body>\n"
        "</html>\n";
    g.close();
}

void storeWishList::saveAsCsv(std::vector<Film> filmList) {

    ofstream g;
    vector<Film>::iterator pointer;
    g.open("wishList.csv", std::fstream::out);
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

void storeWishList::storeListInBasicFormat(std::vector<Film> filmList)
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


