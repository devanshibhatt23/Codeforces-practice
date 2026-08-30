#include <bits/stdc++.h>
#include <string>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
#define yes cout << "YES"
#define no cout << "NO"
#define re return;
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    s += s;
    int ans = 0;

    f(j,0,n) {
        int ct = 1;
        vec v;
    
        f(i,j+1,j+n) {
            if(s[i] == s[i-1]) ct++;
            else {
                v.push_back(ct);
                ct = 1;
            }
        }
    
        if(ct) v.push_back(ct);
        int dis = v.size();
        
        ans = max(ans,dis);
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