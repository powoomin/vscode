//On my honor, I pledge that I have neither received nor provided improper assistance in the completion of this programming assignment. Signed: minwooLee

#include <iostream>
#include <vector>
#include <string>

using namespace std;
string *args_to_strArray();
vector<string> args_to_strVector();
void print_args(vector<string> args);
void print_args(string *args, int argc);
int main(const int argc, char **argv)
{
    vector<string> s;
    cout << "You entered: " << argc << " arguments:" << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
    for (int i = 0; i < argc; i++)
    {
        string s = argv[i];
        cout << s << " size = " << s.size() << endl;
    }
    for (int i = 0; i < argc; i++)
    {
        s.push_back(argv[i]);
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << "vector = " << s[i] << endl;
    }

    return 0;
}