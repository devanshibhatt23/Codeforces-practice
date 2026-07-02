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

    int one = -1, zero = -1;

    f(i,0,n) {
        if(s[i] == '1') {
            one = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--) {
        if(s[i] == '0') {
            zero = i;
            break;
        }
    }

    if(one == -1 || zero == -1 || one > zero) {
        cout << "Bob\n";
        re;
    }

    int ct = 1;
    bool check = 1;

    f(i,one,zero) {
        if(s[i] == s[i+1]) ct++; 
        else {
            if(ct % 2) check = 0;
            ct = 1;
        }
    }

    if(ct % 2) check = 0;

    if(check == 0) cout << "Alice\n";
    else cout << "Bob\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}