#include <iostream>
#include <climits>
using namespace std;

int main(){
    
    int arr[] = {-2, 1, -3, 4, -1, 2, 1};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int maxsum = INT_MIN;
    int csum = 0;
    
    for (int i = 0; i < sz; i++){
            csum = csum + arr[i];
            maxsum = max(csum , maxsum);
            if (csum <= 0){
            csum = 0;
        }
    }
    cout << maxsum;

} 
