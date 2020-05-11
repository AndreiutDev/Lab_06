#pragma once
#include "storeWishList.h"
#include "Film.h"
#include <iostream>

using namespace std;
class accesFile
{
	private:
		vector<Film> wishList;
		storeWishList file = storeWishList();
		string format;
	public:
		accesFile(vector<Film> filmList)
		{
			this->wishList = filmList;
		}

		////////////////////////////////////////////////////////////////////////////////////////////////////
		/// <summary>	Acces data. </summary>
		/// 
		/// <param name="option">	if html or csv </param>
		///
		/// <returns> true if option is valid and saves wishlist as option
		/// 		  false if invalid and it asks again</returns>
		////////////////////////////////////////////////////////////////////////////////////////////////////

		bool accesData(int option);

		//refreshes data, because the vector we recieve is only a copy
		void refreshData(vector<Film> filmList);

		//saves every change made to the wishlist in a file
		void changeFile();

		// the data is already printed in a new format
		// it shows this new format
		void ShowWishListWithNewFormat();

};

