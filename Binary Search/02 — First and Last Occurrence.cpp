// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int   First (int arr[], int sz, int target){
            int st = 0;
            int end = sz-1;
            int ans = -1;
      while(st <= end){
            int mid = (end - st)/2;
            if (target == arr[mid]){
                ans = mid;
                end = mid-1;
            }
            else if (target < arr[mid]){
                end = mid-1;
            }
            else {
                st = mid+1;
            }
    }
    return ans;
}

int Second (int arr[], int sz, int target){
            int st  = 0;
            int end = sz-1;
            int ans = -1;
            while (st <= end){
                int mid = (end - st)/2;
                if (target == arr[mid]){
                    ans = mid;
                    st = mid+1;
                }
                else if (target < arr[mid]){
                    end = mid-1;
                    
                }
                else {
                    st = mid+1;
                }
            }
    
    return ans;
}
int main() {
        int arr[] = {1,2,2,2,3};
        int sz = sizeof(arr)/sizeof(arr[0]);
        
        int target = 2;
      cout << First (arr, sz , target) << endl;
      cout << Second (arr,sz, target);
       
        
        
            
    return 0;
}
