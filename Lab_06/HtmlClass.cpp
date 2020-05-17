#include "HtmlClass.h"

void HtmlClass::save(vector<Film> filmList)
{
    ofstream g;
    vector<Film>::iterator pointer;
    g.open(filename, std::fstream::out);
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