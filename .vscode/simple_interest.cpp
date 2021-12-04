#include <iostream>
using namespace std;

int main(){
    int simple_interest_rate,years,p_amount;
    cout << "Enter simple interest rate:";
    cin >> simple_interest_rate;
    cout << "Enter no of years to invest:";
    cin >> years;
    cout << "Enter principal amount:";
    cin >> p_amount;
    float simple_interst;
    simple_interst = ((simple_interest_rate * p_amount * years) / 100);
    cout << "The simple interest amount is : " << simple_interst;


}
