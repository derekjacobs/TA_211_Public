#include <iostream>

int main(int argc, char* argv[])
{
    if (argc < 2) 
    {
        std::cout << "Not enough arguments" << std::endl;
        return -1;
    }
    
    std::cout << "The following arguments were provided:" << std::endl;
    int iter = 1;
    while(argv[iter]) std::cout << argv[iter++] << std::endl;

    return 0;
}
