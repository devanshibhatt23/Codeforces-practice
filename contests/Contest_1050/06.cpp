#include <bits/stdc++.h>
using namespace std;

int max_sum(vector<int> &arr) {
    int n = arr.size();

    int sum = arr[0];
    int ans = arr[0];

    for(int i=1; i<n; i++) {
        sum = max(arr[i], sum + arr[i]);
        ans = max(ans, sum);
    }

    return ans;
}

int main() {
    vector<int> arr = {3, 6, -1, 10, -7, 9, 4};
    cout << max_sum(arr) << endl;
}