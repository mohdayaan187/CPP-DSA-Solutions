//To find number of prime numbers in the range (1,n) where n is input by the user
#include <iostream>
using namespace std;
class solution{
    public:
    int primeupton(int n){
        int primecount = 0;
        int j; //declared outside to check condition and increment primecount
        for(int i = 2; i <= n; i++){
            for(j = 2; j*j <= i; j++){
                if(i % j == 0)
                    break;
            }
            if(j*j > i) //to check whether i came out of loop due to i % j == 0 or j*j > 1
                primecount++;
        }
        return primecount;
    }
};
int main(){
    solution object;
    int num;
    cout << "Enter the number: ";
    cin  >> num;
    cout << "Number of prime numbers from 1 to " << num << " are " << object.primeupton(num);
    return 0;
}