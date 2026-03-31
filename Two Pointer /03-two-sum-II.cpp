#include <iostream>
using namespace std;
int main (){
    int arr[] = {2,7,11,15};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    int left = 0;
    int  right = sz-1;
    while (left < right){
        int sum = arr[left] + arr[right];
        if (sum == target){
            cout << left << " " << right;
            break;
        }
            else if (sum < target){
                left++;
            }
            else {
                right--;
            }
    }
}
