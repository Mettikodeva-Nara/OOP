#include <iostream>

int main()
{

    int nilai;

    std::cout << "Masukkan Nilai : ";
    std::cin >> nilai;

    std::cout << "\nHexa\t: " << std::hex << nilai << std::endl;
    std::cout << "Dec\t: " << std::dec << nilai << std::endl;
    std::cout << "Oct\t: " << std::oct << nilai << std::endl;

    std::cout << std::endl;

    return 0;
}