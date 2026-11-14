//To check whether the number input by the user is an Armstrong number or not
#include <iostream>
#include <cmath>
using namespace std;

class solution{
    public:
    int cubesum(int n){
        int rem;
        int temp = n;
        int digit = 0;
        int cubesum = 0;
        while(n != 0)
        {
            n = n/10;
            digit++;
        }
        while(temp != 0)
        {
            rem = temp % 10;
            temp = temp/10;
            cubesum = cubesum + round(pow(rem, digit));
        }
        return cubesum;
    }
    bool armstrong(int n){
        int sum;
        sum = cubesum(n);
        if(sum == n)
            return true;
        else
            return false;
    }
};
int main()
{
    solution object;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(object.armstrong(num))
        cout << num << " is an armstrong number" << endl;
    else
        cout << num << " is not an armstrong number" << endl;
    return 0;
}