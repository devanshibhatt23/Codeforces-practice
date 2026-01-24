#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    int ans = 0;

    f(i,0,n) {
        if(s[i] == '0') {
            int check = 1;
            for(int j=max(0,i-k); j<i; j++) {
                if(s[j] == '1') {
                    check = 0;
                    break;
                } 
            }
            if(check) ans++;
        }
    }
    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}