#include <iostream>
#include <climits>
using namespace std;

int main(){
    
    int arr[] = {0, 0, 2, 2, 1, 0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int mid = 0;
    int heigh = sz-1;
    while ( mid <= heigh){
            if (arr[mid] == 0){
                swap(arr[mid] , arr[low]);
                low++;
                mid++;
            }
           else if (arr[mid] == 1){
                mid++;
            }
            else {
                swap(arr[mid] , arr[heigh]);
                heigh--;
            }
    }
    for (int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
}
