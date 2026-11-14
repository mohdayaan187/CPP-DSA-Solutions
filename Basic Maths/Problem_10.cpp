//To check whether the number input by the user is a perfect number or not 
//Perfect Number = Sum of divisors of a number excluding itself equals the number
#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
    vector<int> divisors (int n){
        vector<int> div;
        for(int i=1; i*i <= n; i++){
            if(n % i == 0){
                int q = n/i;
                if(i != n)
                    div.emplace_back(i);
                if(q != i && q != n)
                    div.emplace_back(q);
            }
        }
        return div;
    }
    int sumdiv(vector<int> div){
        int sum = 0;
        for(auto value : div) //used auto here so that compiler can itself determine the data type
            sum = sum + value;
        return sum;
    }
    bool perfect(int num){
        int sum = sumdiv(divisors(num)); //divisors(num) will return the vector and sumdiv(vector) will return the int sum
        if(num == sum)
            return true;
        else
            return false;
    }
};
int main()
{
    solution object;
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if(object.perfect(num))
        cout << num << " is a perfect number";
    else
        cout << num << " is not a perfect number";
    return 0;
}