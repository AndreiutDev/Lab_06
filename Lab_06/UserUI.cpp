#include "UserUI.h"

void UserUI::PrintMenu()
{
	std::cout << "\n=========================================================================\n";
	std::cout << "= 1. Search after genre.                                                =\n";
	std::cout << "= 2. Delete from wishlist.                                              =\n";
	std::cout << "= 3. Show wishlist.                                                     =\n";
	std::cout << "= 4. Exit                                                               =\n";
	std::cout << "=========================================================================\n";
	std::cout << "/////////////////\n";
	std::cout << "/////////////////\n";
	std::cout << "//  USER MENU //\n";
	std::cout << "/////////////////\n";
	std::cout << "/////////////////\n\n";
}

void UserUI::Menu()
{
	
	int key;
	int wishListKey;
	accesFile acces = accesFile(this->controller.getWishList());
	std::cout << "How do you want to save your data?\n";
	std::cout << "1.As Html\n";
	std::cout << "2.As CSV\n";
	int opt;
	bool start = false;
	while (start == false) {
		std::cin >> opt;
		start = acces.accesData(opt);
	}

	bool running = true;
	while (running)
	{
		acces.changeFile();
		PrintMenu();
		std::cin >> key;
		if (key == 1)
		{
			this->controller.GetMoviesWithGenre();
		}
		else if (key == 2)
		{
			this->controller.DeleteFromWishlist();
		}
		else if (key == 3)
		{
			this->controller.ShowWishList();
			acces.ShowWishListWithNewFormat();
		}
		else if (key == 4) {
			running = false;
		}
		acces.refreshData(this->controller.getWishList());
		acces.changeFile();
	}
}
