#include <iostream>

int main()
{
    int N, count;
    std::cin >>N;
    count = N/4;
    while(count > 0)
    {
        std::cout << "long ";
        count --;
    }
    std::cout << "int";
}