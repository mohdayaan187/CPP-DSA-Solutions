//To find LCM of two numbers input by the user (bruteforce approach)
#include <iostream>
using namespace std;
class solution{
    public:
    int LCM(int n1, int n2){
        for(int i = 1; i <= 1000; i++){ //only checks under 1000
            for(int j = 1; j <= 1000; j++){ //time complx is high O(n*n)
                if(n1 * i == n2 * j){
                    return n2*j;
                    break;
                }
            }
        }
    }
};
int main()
{
    solution object;
    int num1, num2;
    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;
    int lcm = object.LCM(num1, num2);
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm;
    return 0;
}