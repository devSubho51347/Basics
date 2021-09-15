#include <iostream>
using namespace std;
int main()
{
    cout << "Enter number \n";
    int n;
    cin >> n;
    bool toggele = false;
    for (int i = 2; i <= n / 2; i = i + 1)
    {
        if (n % i == 0)
        {
            cout << "No is not prime";
            toggele = true;
            break;
        }
    }
    if (toggele == false)
    {
        cout << "No is prime";
    }
}
