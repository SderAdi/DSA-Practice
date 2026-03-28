
#include <iostream>
using namespace std;
int main() {
       int arr[] = {4,5,6,7,0,1,2,3};
       int sz = sizeof(arr)/sizeof(arr[0]);
       int target = 3;
       
       int st  = 0;
       int end = sz-1;
       
       while (st <= end){
           int mid = st + (end - st)/2;
           if (target == arr[mid]){
               cout << mid;
           }
           // lest sorted check
           if (arr[st] <= arr[mid]){
               if(target >= arr[st] && target <= arr[mid]){
                  end = mid-1;
               }
               else {
                   st = mid+1;
               }
           }
           // right sorted check
           else {
               if (target >= arr[mid] && target <= arr[end]){
                   st = mid+1;
               }
               else {
                   end = mid-1;
               }
           }

           }
       
       
    return 0;
}
