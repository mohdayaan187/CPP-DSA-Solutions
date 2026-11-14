//To find all the divisors of a number input by the user
#include <iostream>
#include <vector>
using namespace std;

class solution{
    public:
    vector<int> divisors (int n){
        vector <int> div;
        for(int i = 1; i*i <= n; i++){
            if(n % i == 0){
                int q = n/i;
                div.emplace_back(i);
                if(q != i)
                    div.emplace_back(q);
            }
        }
        return div;
    }
};
int main()
{
    solution object;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> div = object.divisors(num);
    cout << "Divisors of " << num << " are: " << endl;
    for(auto it = div.begin(); it != div.end(); it++) //using iterator to access the vector elements 
        cout << *(it) << " ";
        return 0;
}
