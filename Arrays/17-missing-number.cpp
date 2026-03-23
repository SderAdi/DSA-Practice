#include <iostream>
using namespace std;
int main(){
    int arr[]= {3,0,1,4,5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    int expectedsum = sz*(sz+1)/2;  //15
    for (int i = 0; i < sz; i++){
         sum = sum + arr[i];
    }
    int missing = expectedsum - sum;
    cout << missing;
}
