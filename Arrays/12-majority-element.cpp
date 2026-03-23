// Question: Majority Element
// Algorithm: Boyer-Moore Voting
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr = {2,2,1,1,1,2,2};
    int sz = arr.size();
    int candidate = 0;
    int count = 0;
    for (int i = 0; i < sz; i++){
        if (count == 0){
            candidate = arr[i];
        }
        if (arr[i] == candidate){
            count++;
        }
        else count--;
    }
    cout << " Majority Element is = " << candidate;
  return 0;
}
