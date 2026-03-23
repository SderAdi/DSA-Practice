// here we using xor opperator

#include <iostream>
using namespace std;

int main (){
    int arr[] = {2, 2, 1};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int ans = 0;
    for (int i = 0; i < sz; i++){
        ans = ans ^ arr[i];
    }
    cout << ans;
    return 0;
}
