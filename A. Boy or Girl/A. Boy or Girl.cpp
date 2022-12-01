#include <iostream>    
#include <string>
using namespace std;
void main()
{
    string name;
    cin >> name;
    if (name.length() % 2 == 0) {
        std::cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
}