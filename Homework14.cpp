#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter any string:";
    std::string a;
    std::getline(std::cin, a);
    std::cout << "\nString:" << a << "\nString lenght:" << a.size() << "\nFirst simbol:" << a[0] << "\nLast simbol:" << a[a.size() - 1];

}