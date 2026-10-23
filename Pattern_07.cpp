//Striver A2Z Pattern 7//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i, j, k; 
    for(i=1; i<=n; i++)
    {
        for(k=1; k<=(n-i); k++)
        {
            cout << " ";
        }
        for(j=1; j<=(2*i - 1); j++)
        {   
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}