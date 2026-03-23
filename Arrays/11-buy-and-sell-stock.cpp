// Question: Buy and Sell Stock (Single Transaction)
// Time Complexity: O(n)
// Space Complexity: O(1)


#include <iostream>
using namespace std;

int main(){
  int prices[] = {7,1,5,3,6,4};
  int sz = sizeof(prices)/sizeof(prices[0]);
  int minprice = prices[0];
  int maxprofit = 0;
  for (int i = 1; i < sz; i++){
      if (prices[i] < minprice){
          minprice = prices[i];
      }
      int profit = prices[i] - minprice;
      maxprofit = max(profit , maxprofit);
  }
  cout << maxprofit;
  return 0;
}
