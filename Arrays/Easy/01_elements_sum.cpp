//To find sum of all elements in an array
#include <iostream>
using namespace std;
class solution{
    public:
        int sum_array(int arr[], int n){
            int sum = 0;
            for(int i=0; i<n; i++){
                sum = sum + arr[i];
            }
            return sum;
        }
};
int main(){
    solution object;
    int n;
    cout << "Enter number of elements for array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    for(int j=0; j<n; j++){
        cout << arr[j] << " ";
    }
    cout << endl <<  "Sum of array elements is " << object.sum_array(arr, n);
    return 0;
}