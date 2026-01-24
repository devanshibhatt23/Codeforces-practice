#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n==1) {
        cout << "1\n";
        return; 
    }

    else {
        int count = 0;
        if(n%2==0) {
            for(int i=0,j=n-1; i<n/2 && j>=n/2; i++,j--) {
                if((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0')) {
                    count+=2;
                }
                else{
                    break;
                }
            }  
            cout << n - count << endl; 
        }
        else {
            for(int i=0,j=n-1; i<n/2 && j>n/2; i++,j--) {
                if((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0')) {
                    count+=2;
                }
                else {
                    break;
                }
            }
            cout << n - count << endl; 
        }
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}