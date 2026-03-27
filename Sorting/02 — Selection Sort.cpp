#include <iostream>
using namespace std;
void SelectionSort(int arr[], int sz){
        for (int i = 0; i < sz-1; i++){
            int SI = i;
            for (int j = i+1; j < sz; j++ ){
                if (arr[j] < arr[SI]){
                    SI = j;
                }
            }
            swap(arr[i] , arr[SI]);
        }
        for (int i = 0; i < sz; i++){
            cout << arr[i] << " ";
        }
}
int main(){
    int arr[] ={6,3,0,2,1}; 
    int sz = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr, sz);
}
