#include <iostream>
#include <climits>
using namespace std;

int main (){
    int arr[] = {4,1,7,6,9};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < sz; i++){
        if (arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
       else if (arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }
    cout << "Second largest is = " << second << endl;

    return 0;
}
