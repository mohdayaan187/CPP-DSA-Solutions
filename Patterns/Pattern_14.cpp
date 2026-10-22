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
        char c = 'A';
        for(j=1; j<=i; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
    return 0;
}