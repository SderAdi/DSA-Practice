#include <iostream>
using namespace std;

int main (){
    int arr[] = {1,2,3,4,5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int j = arr[sz-1];

    for (int i = sz-1; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = j;
    for (int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
