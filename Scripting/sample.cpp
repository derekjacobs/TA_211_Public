#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[])
{
    if (argc < 2) 
    {
        std::cout << "Not enough arguments, try again..." << std::endl;
        return -1;
    }
    
    std::ifstream infile;
    infile.open(argv[1]);

    if(!infile)
    {
        std::cout << "File \'" << argv[1] << "\' could not be opened. Try again..." << std::endl;
    }
    std::string str;

    while(std::getline(infile, str)) std::cout << str << std::endl;
    
    return 0;
}