

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int sz, int target){
            int st = 0;
            int end = sz-1;
            while (st <= end){
            int mid = (st+end)/2;
            if (target == arr[mid]){
                return mid;   
            }
            else if (target < arr[mid]){
                end = mid-1;
            }
            else {
                st = mid+1;

            }
        }
        return -1;
}

int main() {
        int arr[] = {-1,0,3,5,9,12};
        int sz = sizeof(arr)/sizeof(arr[0]);
        
        int target = 9;

     cout <<  BinarySearch (arr,sz,target);
       
        
        
            
    return 0;
}
