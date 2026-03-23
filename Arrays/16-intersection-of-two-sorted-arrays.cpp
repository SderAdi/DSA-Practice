#include <iostream>
using namespace std;
int main(){
    
    int arr1[] = {2,3,4,5,7};
    int arr2[] = {1,2,3,4,5};
    
    int sz1 = sizeof(arr1)/sizeof(arr1[0]);
    int sz2 = sizeof(arr2)/sizeof(arr2[0]);

    int i = 0;
    int j = 0;

    while (i <= sz1-1 && j <= sz2-1){
        if(arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]){
            i++;
        }
        else {
            j++;
        }
        
    }
    return 0;
}
