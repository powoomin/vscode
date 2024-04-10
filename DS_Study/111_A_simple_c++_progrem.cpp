//  Linker - C++ 코드와 라이브러리를 묶어 실행하는 단축기 실행기 생성
//
//  DS_Study
//
//  Created by 이민우 on 4/10/24.
// x + y = sum
#include <cstdlib> //<- header file
#include <iostream>

int main()
{
    int x,y;
    std::cout <<"Please enter two numbers : ";
    std::cin >> x >> y;
    
    int sum = x + y;
    std::cout << "Their sum is " << sum << std::endl;
    
    return EXIT_SUCCESS;
}
