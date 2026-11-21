//To find LCM of two numbers input by the user (Optimal solution)
//For two numbers a & b -> a*b = LCM(a,b) * GCD(a,b) 
#include <iostream>
using namespace std;
class solution{
    public:
    int gcd(int n1, int n2){
        int rem;
        while(n1 != 0){
            rem = n2 % n1;
            n2 = n1;
            n1 = rem;
        }
        int gcd = n2;
        return gcd;
    }
    int lcm(int n1, int n2, int gcd){
        int lcm;
        lcm = (n1 * n2)/gcd;
        return lcm;
    }
};
int main()
{
    solution object;
    int num1, num2;
    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;
    int gcd = object.gcd(num1, num2);
    int lcm = object.lcm(num1, num2, gcd);
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm;
    return 0;
}