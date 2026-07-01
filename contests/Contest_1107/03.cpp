#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define re return;
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string k = "";
    k.push_back(s[0]);

    f(i,1,n) {
        if(s[i] == s[i-1]) continue;
        else k.push_back(s[i]);
    }

    int m = k.size();

    if(k[0] == k[m-1]) {
        cout << 1;
        nn;
    }
    else if(m == 2) {
        cout << 2;
        nn;
    }
    else {
        cout << 1;
        nn;
    }
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}