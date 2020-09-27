#include <iostream>

int main(int argc, char* argv[])
{
    if (argc < 2) 
    {
        std::cout << "Not enough arguments" << std::endl;
        return -1;
    }
    
    int iter = 1;
    while(argv[iter]) std::cout << argv[iter++] << std::endl;

    return 0;
}