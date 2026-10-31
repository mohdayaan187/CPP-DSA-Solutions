//To find the largest digit in an integer input by the user
#include <iostream>
using namespace std;
int main()
{
    int num;
    int max = 0;
    int rem;
    cout << "Enter the number: ";
    cin >> num;
    if(num == 0)
        max = 0;
    else
    {
        if(num < 0)
            num = -num;
        while(num != 0)
        {
            rem = num % 10;
            if(rem > max)
                max = rem;
            num = num/10;
        }
    }
    cout << "Largest digit is " << max;
    return 0;
}