#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max;
    max = a;
    if (b > max)
    {
        max = b;
        if (c > max)
        {
            max = c;
            cout << "Max of three nos is" << c << endl;
        }
        else
        {
            cout << "Max of three nos is" << b << endl;
        }
    }
    else if (c > max)
    {
        max = c;
        if (b > max)
        {
            max = b;
            cout << "Max of three nos is" << max << endl;
        }
        else
        {
            cout << "Max of three nos is" << max << endl;
        }
    }
    else
    {
        cout << "Max of three nos is " << max << endl;
    }
}