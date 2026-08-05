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

    string a,b;
    cin >> a >> b;

    if(a == b) {
        cout << "0\n";
        re;
    }

    if(a.size() <= 2) {
        cout << "-1\n";
        re;
    }

    int ct0a=0, ct0b=0, ct1a=0, ct1b=0;
    vec evena, odda, evenb, oddb;

    f(i,0,n) {
        if(a[i] == 1) ct1a++;
        else ct0a++;

        if(b[i] == 1) ct1b++;
        else ct0b++;
    }

    if(ct1a != ct1b || ct0a != ct0b) {
        cout << "-1\n";
        re;
    }

    f(i,0,n) {
        if(i%2) {
            if(a[i] == '1') odda.push_back(i);
            if(b[i] == '1') oddb.push_back(i);
        }
        else {
            if(a[i] == '1') evena.push_back(i);
            if(b[i] == '1') evenb.push_back(i);
        }
    }

    ll ans = 0;

    if(odda.size() != oddb.size() || evena.size() != evenb.size()) {
        cout << "-1\n";
        re;
    }

    f(i,0,odda.size()) {
        ans += abs(odda[i]-oddb[i]);
    }
    f(i,0,evena.size()) {
        ans += abs(evena[i]-evenb[i]);
    }

    ans /= 2;
    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}