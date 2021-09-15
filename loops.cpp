#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;

    for (int count = 1; count <= n; count++)
    {
        sum = sum + count;
    }
    cout << "The total sum is\n"
         << sum << endl;

    sum = 0;
    int j = 0;
    while (j < n)
    {
        sum = sum + j;
        j = j + 1;
    }
    cout << "Sum is" << sum;
}