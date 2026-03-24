#include <iostream>
using namespace std;

void bubbleSort(int arr[], int sz){
            for (int i = 0; i < sz-1; i++){
                for (int j = 0; j < sz-i-1; j++){
                    if (arr[j] > arr[j+1]){
                        swap(arr[j], arr[j+1]);
                    }
                }
            }
            for (int i = 0; i < sz; i++){
                cout << arr[i] << " ";
            }
            
}


int main(){
    int arr[] ={6,3,0,2,1}; // 5 8 3 1 2
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr , sz);
    
    return 0;
}
