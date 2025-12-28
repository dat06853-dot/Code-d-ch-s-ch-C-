#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(nullptr));   // seed random
    unsigned char inputData = std::rand() % 256;

    std::cout << std::hex << (int)inputData << std::endl;
    std::cin.get();   // đợi Enter
    return 0;
}
