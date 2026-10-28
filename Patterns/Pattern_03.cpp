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
            cout << j;
        }
        cout << endl;
    }
    return 0;
}