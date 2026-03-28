/*
mid aur mid+1 compare karo

agar arr[mid] > arr[mid+1]
→ peak left side me hai (end = mid)

warna
→ peak right side me hai (st = mid + 1)

jab st == end
→ wahi peak index hai

*/

#include <iostream>
using namespace std;
int main(){
    int arr[] ={3,2,1,1};
    int sz = sizeof(arr)/sizeof(arr[0]);
    
    int st = 0;
    int end = sz-1;
    
    while (st < end){
        int mid = st+(end-st)/2;
        
        if (arr[mid] > arr[mid+1]){
            end = mid;
        }
        else {
            st = mid+1;
        }
    }
cout << st;

}
