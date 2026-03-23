// Question: Leaders in Array
// Approach: Traverse from right and track max element
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr = {7,10,4,10,6,5,2};
    int sz = arr.size();
    int maxright = arr[sz-1];
    cout << maxright << " ";
   
    for (int i = sz-2; i >= 0; i--){
        if ( arr[i] > maxright){
            cout << arr[i] << " ";
            maxright = arr[i];
        }
    }
  return 0;
}

