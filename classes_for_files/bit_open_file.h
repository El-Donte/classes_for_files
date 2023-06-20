#pragma once
#include "openfile.h"
#include <bitset>

class bit_open_file : public openfile {
public:
	void Display(const char* path) {
		std::ifstream fin;
		try
		{
			fin.open(path);
			if (!fin.is_open()) {
				throw std::invalid_argument("Error: can`t open file");
			}
			else {
				while (!fin.eof()) {
					std::getline(fin, str);
					for (int i = 0; i < str.size(); i++) {
						std::cout << std::bitset<8>(str[i]) << ' ';
					}
				}
			}
			fin.close();
		}
		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}

	}
};