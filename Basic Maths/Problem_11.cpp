//To find GCD/HCF of two numbers input by the user
#include <iostream>
#include <vector>
using namespace std;

class solution{
    public:
    vector <int> divisor (int num){
        vector <int> div;
        int q;
        for(int i = 1; i*i <= num; i++){
            if(num % i == 0){
                q = num / i;
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
    int x, y;
    int max = 1;
    cout << "Enter two numbers (>0): ";
    cin >> x >> y;
    vector <int> div1 = object.divisor(x);
    vector <int> div2 = object.divisor(y);
    for(auto itx = div1.begin(); itx != div1.end(); itx++){ //or directly use for(int a : div1)
        for(auto ity = div2.begin(); ity != div2.end(); ity++){
            if(*(itx) == *(ity)){
                if(*(ity) > max)
                    max = *(ity);
                break;
            }
        }
    }
    cout << "GCD of " << x << " and " << y << " is " << max;
    return 0;
}