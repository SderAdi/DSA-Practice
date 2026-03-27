#include <iostream>
using namespace std;
void IncertionSort(int arr[], int sz){
    for (int i = 1; i < sz; i++){
        int currn = arr[i];
        int prev = i-1;
        while (prev >= 0 && arr[prev] > currn){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = currn;
    }
      for (int i = 0; i < sz; i++){
        cout << arr[i] << " ";
      }
}

int main(){
    int arr[] ={6,3,0,2,1}; 
    int sz = sizeof(arr)/sizeof(arr[0]);
    IncertionSort(arr,sz);

    return 0;
}
