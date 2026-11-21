//To check whether the number input by the user is a prime number or not
#include <iostream>
using namespace std;
class solution{
    public:
    bool prime(int n){
        if(n == 1)
            return false;
        if(n < 1){
            cout << "Enter a valid number" << endl;
            return false;
        }
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0)
                return false;
        }
        return true;
    }
};
int main()
{
    solution object;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(object.prime(num))
        cout << num << " is a prime number";
    else
        cout << num << " is not a prime number";
    return 0;
}