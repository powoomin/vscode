////On my honor, I pledge that I have neither received nor provided improper assistance in the completion of this programming assignment. 
//Signed: minwooLee Student Number : 21900505

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(void)
{
    while (1)
    {
        string name;
        cout << "Enter a name : ";
        getline(cin,name);
        if(name.size()==0) 
        {
            break;
        }
        
        cout << "Hello " << name << "!" << endl;
    }
    cout << "Hello World!" << endl;
}