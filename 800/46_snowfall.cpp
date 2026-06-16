#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i]
#define s(v) sort(v.begin(), v.end())
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) ci;

    vec div3(0), div2(0), others(0), div6(0);

    f(i,0,n) {
        if(v[i] % 6 == 0) div6.push_back(v[i]);
        else if(v[i] % 2 == 0) div2.push_back(v[i]);
        else if(v[i] % 3 == 0) div3.push_back(v[i]);
        else others.push_back(v[i]);
    }

    for(int i : div6) cout << i << " ";
    for(int i : div2) cout << i << " ";
    for(int i : others) cout << i << " ";
    for(int i : div3) cout << i << " ";
    nn;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}