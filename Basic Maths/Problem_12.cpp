//To find GCD/HCF of two numbers input by the user using Euclideon Algorithm
// The GCD of x and y is the same as the GCD of y and the remainder of x divided by y
#include <iostream>
using namespace std;

class solution{
    public:
    int gcd(int x, int y){
        int rem;
        while(x != 0){
            rem = y % x; //if x>y it will swap the values and work like y>x from the next step
            y = x;
            x = rem;
        }
        return y;
    }
};
int main()
{
    solution object;
    int x, y;
    cout << "Enter two numbers (>0): ";
    cin >> x >> y;
    int gcd = object.gcd(x, y);
    cout << "GCD of " << x << " and " << y << " is " << gcd;
    return 0;
}