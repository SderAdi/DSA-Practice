#include <iostream>
using namespace std;
int main(){
    int arr[]= {1,1,0,1};
    int sz = sizeof(arr)/sizeof(arr[0]);

    int count = 0;
    int maxcount = 0;
    for (int i = 0; i < sz; i++){
        if (arr[i] == 1){
            count++;
             if (count > maxcount){
                maxcount = count;
             }
        }
        else count = 0;
    }
    cout << maxcount << endl;
    return 0;
}
