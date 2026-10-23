//Striver A2Z Pattern 4//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<i+1; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}