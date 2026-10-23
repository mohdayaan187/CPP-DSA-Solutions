//Striver A2Z Pattern 8//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i, j, k; 
    for(i=n; i>0; i--)
    {
        for(j=1; j<=(2*i - 1); j++)
        {   
            cout << "*";
        }
        cout << endl;
        for(k=1; k<=(n-(i-1)); k++)
        {
            cout << " ";
        }
    }
    return 0;
}