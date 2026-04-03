#include <iostream>
using namespace std;
int main(){
        int A[] = {1,3,5};
        int B[] = {2,4,6};
        int n1 = 3, n2 = 3;

        int i = 0, j = 0, k = 0;
        int merged[6];

        while (i < n1 && j < n2){
            if (A[i] < B[j]){
                merged[k] = A[i];
                i++;
            }
            else {
                merged[k] = B[j];
                j++;
            }
            k++;
        }
        //remaining elements
        while (i < n1){
            merged[k] = A[i];
            i++;
            k++;
        }

        while (j < n2){
            merged[k] = B[j];
            j++;
            k++;
        }
        for (int k = 0; k < 6; k++){
            cout << merged[k] << " ";
        }
}
