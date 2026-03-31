#include <iostream>
#include <climits>
using namespace std;
int main(){
    int height[] = {4,3,2,1,4};
    int sz = sizeof(height)/sizeof(height[0]);
    int st = 0;
    int end = sz-1;
    int maxwater = 0;
    while (st < end){
        int Width = end - st;
        int Height = min(height[st] , height[end]);
        int area = Height * Width;
        maxwater = max(area , maxwater);
        if (height[st] < height[end]){
            st++;
        }
        else {
            end--;
        }
    }
    cout << maxwater;
}
