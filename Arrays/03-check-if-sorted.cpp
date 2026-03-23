#include <iostream>
using namespace std;
int main (){
    int arr[] = {1,2,3,4,5};
    int sz = sizeof(arr)/sizeof(arr[0]);;
    bool sorted = true;
    for (int i = 0; i < sz-1; i++){
        if (arr[i] > arr[i+1]){
            sorted = false;
            break;
        }
    }
    if (!sorted) cout << "NOT SORTED";
    else cout << " SORTED ";
    
    return 0;
}
