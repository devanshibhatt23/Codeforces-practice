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

    vec ans(0);

    int k = 1;

    for(int i=n-1; i>=0; i--) {
        v[i] *= k;

        if(v[i] > 0) {
            ans.push_back(i+1);
            k *= -1;
        }
    }

    cout << ans.size();
    nn;
    f(i,0,ans.size()) cout << ans[i] << " ";
    nn;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}