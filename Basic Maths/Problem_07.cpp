//To check whether the number input by the user is a palindrome or not
//To find reverse of a number input by the user
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int orgnum = num;
    int revnum = 0;
    int rem;
    while(num != 0)
    {
        rem = num % 10;
        revnum = (revnum * 10) + rem;
        num = num / 10;
    }
    if(orgnum == revnum)
        cout << "Palindrome.";
    else
        cout << "Not a palindrome.";
    return 0;
}   