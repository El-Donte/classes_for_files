#include <iostream>
#include "openfile.h"
#include "bit_open_file.h"
#include "openfileascii.h"

int main()
{
    openfile file;
    file.Display("test.txt");
    std::cout << std::endl;

    open_file_ascii file2;
    file2.Display("test.txt");
    std::cout << std::endl;

    bit_open_file file3;
    file3.Display("test.txt");
    std::cout << std::endl;
}

