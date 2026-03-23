// By nested loop  time complexcity = O()

#include <iostream>
using namespace std;

int main (){
    int arr[] = {2,7,11,15};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    for (int i = 0; i < sz; i++){
        for (int j = i+1; j < sz; j++){
            if (arr[i] + arr[j] == target){ 
                cout << "index " << i << " " << "index " << j;
                return 0;
            }
        }
    }
    cout << " no pair found" ;
    return 0;
}
