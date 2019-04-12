#include "pch.h"|
#include <iostream>
#include <string>

struct par {
	std::string author;
	std::string zhanr;
	std::string name;
	int ter;
};



int main()
{
	int i = 0;
	std::cout << "Enter number of books\n";
	std::cin >> i;
	par x[50];
	for (size_t j = 0; j < i; j++)
	{
		std::cout << "Enter author of book\n";
		std::cin >> x[j].author;
		std::cout << "Enter zhanr\n";
		std::cin >> x[j].zhanr;
		std::cout << "Enter name of book\n";
		std::cin >> x[j].name;
		std::cout << "Enter terazn\n";
		std::cin >> x[j].ter;

	}
	std::cout << "_|_|_|_|_|TERAZH > 10000|_|_|_|_|_\n";
	for (size_t j = 0; j < i; j++)
	{
		if (x[j].ter > 10000) {
			std::cout << "Author of book: " << x[j].author << "\n";
			std::cout << "Zhanr: " << x[j].zhanr << "\n";
			std::cout << "Name of book: " << x[j].name << "\n";
			std::cout << "Terazh: " << x[j].ter << "\n";
			std::cout << "_____________________\n";
		}

	}
	
}


