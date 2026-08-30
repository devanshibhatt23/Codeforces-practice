#include <bits/stdc++.h>
#include <iomanip>
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
    string s;
    cin >> s;

    int ct = 0;
    f(i,0,s.size()-1) {
        if(s[i] == s[i+1]) ct++;   
    }

    if(ct > 2) no;
    else yes;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}