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

    int ct0 = 0, ct1 = 0;

    f(i,0,n) {
        if(s[i] == '0') ct0++;
        else ct1++;
    }

    if(ct0 == n) {
        cout << "0\n";
        re;
    }

    if(ct0 % 2) {
        cout << ct0;
        nn;

        f(i,0,n) {
            if(s[i] == '0') cout << i+1 << " ";
        }

        nn;
        re;
    }

    if(ct1 % 2) {
        cout << "-1\n";
        re;
    }

    cout << ct1;
    nn;

    f(i,0,n) {
        if(s[i] == '1') cout << i+1 << " ";
    }

    nn;    
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}