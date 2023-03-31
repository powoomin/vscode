//C++ Chapter 01
//01-1 printf와 scanf를 대신한느 입출력 방식

//문자열 "Hello World"의 출력
#include <iostream>
int Cout();
int Cin();
int main()*
{
    while (1)
    {
        int num;

        std::cout<<"1. Cout\n2. Cin\n0. Eixt\n골라 >> ";
        std::cin>>num;
        std::cout<<std::endl;

        if(num ==0) break;
        else if(num ==1) 
        {
            Cout();
        }
        else if(num ==2) 
        {
            Cin();
        }
 
    }
}

int Cout() //cout 프린트 함수
{
    int num = 20;
    std::cout << "Hello World!" << std::endl; //endl <- 뛰어쓰기
    std::cout << "Hello"
              << "World!" << std::endl; // 이어지는 표현
    std::cout << num << ' ' << 'A';
    std::cout << ' ' << 3.14 << std::endl;
    return 0;

    /*
1. 헤더파일 선언문 #incldue <iostream>
- 헤더파일의 확장자는 C언와 마찬가지로 .h이다
- 그러나 C++ 에서는 헤더파일의 선언이 아닌, 
표준 헤더파일의 선언에서는 확장자를 생략하기로 약속되어 있다
- 과거의 표준 라이브러리와 새로운 표준 라이브러리의 구분
- 새로운 표준 라이브러리르 사용하는 형태로 소스코드를 쉽게 변경할 수 있도록 하는 것이 좋다

2. std::cout<< '출력대상';  
(연산자를 이용한 출력)
- '출력대상'의 위치는 무엇이든 올 수 있다
- 정수와 실수를 비록해서 문자열, 그리고 변수도 올 수 있다

3. std::cout<<'출력대상1'<<'출력대상2'<<'출력대상3';
(연산자를 이용한 출력대상의 연이은 표현과 개행)
- '<<'도 연산자이다
- 둘 이상의 출력대상을 연이어서 출력할 수 있다
- '<<'연산자를 이용한 std::endl의 출력은 개행으로 이어진다
*/
}

int Cin() //cin 입력 함수
{
    /*
    1. std::cin>>'변수';
    - C++ 에서는 데이터의 입력도 데이터의 출력과 마찬가지로 별도의 포맷 지정이 필요 없다
    */
    int val1;
    std::cout << "덧셈" << std::endl;
    std::cout << "첫 번째 숫자 입력 : ";
    std::cin >> val1; //입력

    int val2;
    std::cout << "두 번째 숫자 입력 : ";
    std::cin >> val2;

    int result = val1 + val2;
    std::cout << val1 << " + " << val2 << " = " << result << std::endl;

    /*
    2. C++ 의 지역변수 선언
    - C언어는 지역변수의 선선이 항상 제일 먼저 있었지만
    - C++ 의 지역변수 선언은 함수 내 어디든 삽입이 가능하다
    */
    std::cout << "두 수 사이의 정수 합\n"<< "두 개의 숫자를 입력 : ";
    std::cin >> val1 >> val2;
    if (val1 < val2)
    {
        for (int i = val1 + 1; i < val2; i++)
        {
            result += i;
        }
    }
    else
    {
        for (int i = val2 + 1; i < val1; i++)
        {
            result += i;
        }
    }
    std::cout << "사이의 정수들의 합 : " << result << std::endl;

    //배열 기반의 문자열 입출
    char name[100];
    char lang[100];

    std::cout << "이름은 무엇입니까? ";
    std::cin >> name;

    std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
    std::cin >> lang;

    std::cout << "내 이름은 " << name << "입니다" << std::endl;
    std::cout << "제일 좋아하는 언어는 " << lang << "입니다" << std::endl;
    return 0;
}