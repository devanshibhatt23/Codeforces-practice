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
    int n,m;
    cin >> n >> m;

    vec v(n);
    f(i,0,n) cin >> v[i];

    vec freq(m+1,0);
    f(i,0,n) freq[v[i]]++;

    vec suffix(m+1,0);
    suffix[m] = freq[m];

    for(int i=m-1; i>=1; i--) {
        suffix[i] = suffix[i+1] + freq[i];
    }

    int ans = 0;

    f(x,1,m+1) {
        int temp = suffix[x];
        
        if(2*x <= m) temp += freq[2*x];

        ans = max(ans,temp);
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