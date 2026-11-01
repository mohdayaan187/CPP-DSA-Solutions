//To find reverse of a number input by the user
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int revnum = 0;
    int rem;
    while(num != 0)
    {
        rem = num % 10;
        revnum = (revnum * 10) + rem;
        num = num / 10;
    }
    cout << "Reverse of the number = " << revnum;
    return 0;
}   