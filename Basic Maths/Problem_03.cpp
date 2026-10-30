//To count number of odd digits in an integer input by the user//
#include <iostream>
using namespace std;
int main()
{
    int num;
    int odd = 0;
    int digit;
    cout << "Enter the number: ";
    cin >> num;
    if(num == 0)
        odd = 0;
    else
    {
        if(num < 0)
            num = -num;
        while(num != 0)
        {
            digit = num % 10;
            if(digit % 2 != 0)
                odd++;
            num = num/10;
        }
    }
    cout << "Number of odd digits = " << odd;
    return 0;
}