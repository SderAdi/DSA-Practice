//15 — Union of Two Sorted Arrays (basic) ✅
// Question: Union of Two Sorted Arrays
// Approach: Two Pointer
// Time Complexity: O(n1 + n2)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1,2,3,4};
    int arr2[] = {1,2,4,8,9};

    int sz1 = sizeof(arr1)/sizeof(arr1[0]);
    int sz2 = sizeof(arr2)/sizeof(arr2[0]);

    int i = 0, j = 0;

    while (i < sz1 && j < sz2) {
        if (arr1[i] < arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr2[j] < arr1[i]){
            cout << arr2[j] << " ";
            j++;
        }
        else {
            cout <<arr1[i] <<" ";
            i++;
            j++;
        }
    }
    while (i < sz1){
        cout << arr1[i] << " ";
        i++;
    }
    while (j < sz2){
        cout << arr2[j] << " ";
        j++;
    }

    return 0;
}


// 15 — Union with duplicates handled ⭐ (strong version)

#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1,1,3,4};
    int arr2[] = {1,2,2,3,9};

    int sz1 = sizeof(arr1)/sizeof(arr1[0]);
    int sz2 = sizeof(arr2)/sizeof(arr2[0]);

    int i = 0, j = 0;
    int last =-1;

    while (i < sz1 && j < sz2) {
        if (arr1[i] < arr2[j]){
            if (arr1[i] != last){
                 cout << arr1[i] << " ";
                 last = arr1[i];
            }
                i++;
        }
        else if (arr2[j] < arr1[i]){
            if (arr2[j] != last){
               cout << arr2[j] << " ";
               last = arr2[j];
            }
               j++;
        }
        else {
            if (arr1[i] != last){
               cout <<arr1[i] <<" "; 
               last = arr1[i];
            }
            i++;
            j++;
        }
    }
    while (i < sz1){
        if (arr1[i] != last) {
                  cout << arr1[i] << " ";
                  last = arr1[i];
        }
             i++;
    }
    while (j < sz2){
        if (arr2[j] != last){
        cout << arr2[j] << " ";   
        }
        j++;
    }

    return 0;
}
