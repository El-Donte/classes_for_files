#pragma once
#include<iostream>
#include <fstream>
#include <string>

class openfile
{
protected:
	std::string str;
public:
	virtual void Display(const char* path) {
		std::ifstream fin;
		try
		{	
			fin.open(path);
			if (!fin.is_open()) {
				throw std::invalid_argument("Error: can`t open file");
			}
			else {
				
				while (!fin.eof()) {
					str = " ";
					std::getline(fin,str);
					std::cout << str << std::endl;
				}
			}
			fin.close();
		}
		catch (const std::exception& e)
		{
			std::cout << e.what()<<std::endl;
		}
	}


};

