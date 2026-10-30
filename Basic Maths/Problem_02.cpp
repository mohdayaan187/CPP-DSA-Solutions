//To count number of digits of an integer input by the user using logarithm//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    int count;
    cout << "Enter the number: ";
    cin >> num;
    if(num == 0)
        count = 1;
    else
    {
        if(num < 0)
            num = -num;
        count = log10(num) + 1;
    }
    cout << "Number of digits = " << count;
    return 0;
}