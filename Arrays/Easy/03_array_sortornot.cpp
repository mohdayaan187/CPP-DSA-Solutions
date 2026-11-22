//To check whether the array elements are sorted in ascending/increasing order or not
#include <iostream>
using namespace std;

class solution{
    public:
    bool sorted_ornot(int arr[], int n){
        int i;
        for(i=0; i<n; i++){
            if(arr[i+1] < arr[i]){
                return false;
                break;
            }
        }
        if(i >= n)
            return true;
    }
};
int main(){
    solution object;
    int n;
    cout << "Enter number of elements for array: ";
    cin >> n;
    n = abs(n);
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(object.sorted_ornot(arr, n))
        cout << "Array elements are sorted in ascending order";
    else
        cout << "Array elements are NOT sorted in ascending order";
    return 0;
}