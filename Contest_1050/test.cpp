#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
void reverse(int arr[], int n){
        int start = 0, end = n-1;
        if(start <= end) {
            swap(arr[start], arr[end]);
            start++; end--;
            reverse(arr, n);
        }

        else {
            for(int i=0; i<n; i++) cout << arr[i] << ",";
            cout << endl;
        }
    }
};


int main() {
    Solution s1;
    int arr[] = {1,2,3,4};
    s1.reverse(arr, 4);
}