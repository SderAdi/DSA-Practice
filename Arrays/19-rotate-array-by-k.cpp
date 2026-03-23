#include <iostream>
using namespace std;
int main(){

    int arr[]= {1,2,3,4,5,6,7};                
    int sz = sizeof(arr)/sizeof(arr[0]);

    int k = 3;
    int st = 0;
    int end = sz-1;
    k = k % sz;
    // reverse whole array
    while (st < end){
        swap(arr[st], arr[end]);
            st++;
            end--;       
        }
    // reverse first k
    st = 0;
    end = k-1;
    while(st < end){
        swap(arr[st], arr[end]);
        st++;
        end--;       
    }
    //reverse remaining element
    st = k;
    end = sz-1;
    while(st < end){
        swap(arr[st], arr[end]);
        st++;
        end--;
    }

    for (int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
}
