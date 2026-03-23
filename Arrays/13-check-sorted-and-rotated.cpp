// Question: Check if Array is Sorted and Rotated
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr = {3,4,5,1,2};
    int sz = arr.size();
    int count = 0;
    for (int i = 0; i < sz; i++){
        if ( arr[i] > arr[(i+1)%sz]){
            count++;
        }
    }
   if (count <= 1) cout << "SORTED";
   else cout << "NOT SORTED";
  return 0;
}
