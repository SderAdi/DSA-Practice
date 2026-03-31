/*
mid² compare with n
mid² ≤ n → right jao, ans store karo
mid² > n → left jao
last valid mid = answer
*/
#include <iostream>
using namespace std;
int main(){
    int n = 16;
    int st = 0;
    int end = n;
    int ans = 0;

    while (st <= end){
        int mid = st + (end-st)/2;

        if (mid * mid == n){
            ans =  mid;
            break;
        }
        else if (mid * mid < n){
             ans = mid;
             st = mid+1;
        }
        else {
              end = mid-1;
        }
    }
    cout << ans;
}
