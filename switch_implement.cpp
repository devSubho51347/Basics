#include <iostream>
using namespace std;
int main()
{
    char button;
    cout << "Enter your family code character";
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "My name is Sunny";
        break;
    case 'b':
        cout << "My name is Babi";
        break;
    case 'c':
        cout << "I am the mom of Sunny and Babi";
        break;

    default:
        cout << "I am not a part of their family";
        break;
    }
}