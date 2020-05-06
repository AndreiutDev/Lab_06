#pragma once
#include <iostream>
#include <fstream>
#include "userRepo.h"
using namespace std;

class storeWishList
{
private:
public:
	storeWishList(std::vector<Film> filmList, std::string storage_mode) {
		ofstream g;
		g.open("AdminMovies.html", std::fstream::out);
		if (storage_mode == "HTML")
		{
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
                "<tr>\n"
                "<th>Movie Title</th>\n"
                "<th>Genre</th>\n"
                "<th>Apparition year</th>\n"
                "<th>Trailer</th>\n"
                "</tr>\n"
                "<tr>\n"
                "<td>Alfreds Futterkiste</td>\n"
                "<td>Maria Anders</td>\n"
                "<td>Germany</td>\n"
                "<td><a href = 'https://www.youtube.com/watch?v=kVrqfYjkTdQ'>Link</a></td>\n"
                "</tr>\n"

                "</table>\n"

                "</body>\n"
                "</html>\n";

		}
		else if (storage_mode == "CSV")
		{

		}
	}
};

