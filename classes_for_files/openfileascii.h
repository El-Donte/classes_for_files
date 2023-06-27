#pragma once
#include "openfile.h"

class open_file_ascii : public openfile {
	char ch;
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

				while (fin.get(ch)) {
					if (ch == '\n') {
						std::cout << std::endl;
					}
					else {
						std::cout << (int)ch<<' ';
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