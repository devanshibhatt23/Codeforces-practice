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

    char ch;
    cin >> ch;

    string s;
    cin >> s;

    int ct = 0;

    f(i,0,n/2) {
        if(s[i] == s[n-i-1]) continue;
        else if(s[i] == ch || s[n-i-1] == ch) ct++;
        else ct += 2;
    }

    cout << ct;
    nn;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}