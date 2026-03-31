#include <iostream>
using namespace std;
    int main (){
    int arr[] = {1,1,2,2,3,3,4};
    int sz = sizeof(arr)/sizeof(arr[0]);
    
    int j = 0;
    for (int i = 1; i < sz; i++){
        if (arr[i] != arr[j]){
            j++;
            swap (arr[j], arr[i]);
        }
    }
    for (int i = 0; i <= j; i++){
        cout << arr[i] << " ";
    }
}
