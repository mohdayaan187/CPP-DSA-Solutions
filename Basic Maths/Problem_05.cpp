//To find factorial of a number input by the user
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if(num < 0)
    {
        cout << "Enter a positive number.";
        return 0;
    }
    int i;
    long long int fact = 1;
    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial = " << fact;
    return 0;
}