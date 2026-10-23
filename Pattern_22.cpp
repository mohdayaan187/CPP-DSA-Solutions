#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int i, j;
    for(i=1; i<=(2*n-1); i++)
    {
        int k=n;
        if(i<=n)
        {
            for(j=1; j<=(2*n-1); j++)
            {
                cout << k;
                if(i>j)
                    k--;
                if(i+j>(2*n-1))
                    k++;
            }
        }
        if(i>n)
        {
            for(j=1; j<=(2*n-1); j++)
            {
                cout << k;
                if(i+j<=(2*n-1))
                    k--;
                if(j>=i)
                    k++;
            }
        }
        cout << endl;
    }
    return 0;
}