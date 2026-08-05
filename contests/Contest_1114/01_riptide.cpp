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
    int a,b,c;
    cin >> a >> b >> c;

    int ans = 0;

    if(a==b || b==c ||  a==c) {
        en;
        re;
    }

    int maxi = max(a,b);
    int mini = min(a,b);
    mini = min(mini,c);
    maxi = max(maxi,c);
    
    int rest;
    if(a != mini && a != maxi) rest = a;
    if(b != mini && b != maxi) rest = b;
    if(c != mini && c != maxi) rest = c;

    cout << min(maxi-rest, rest-mini);
    nn;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}