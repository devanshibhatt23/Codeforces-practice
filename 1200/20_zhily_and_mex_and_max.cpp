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
    
    vec v(n);
    f(i,0,n) ci;

    s(v);

    swap(v[0],v[n-1]);

    sort(v.begin()+1,v.end());

    vec v1,v2;

    f(i,1,n) {
        if(v1.size() && v1.back() == v[i]) v2.push_back(v[i]);
        else v1.push_back(v[i]);
    }

    int k = 1;
    f(i,0,v1.size()) {
        v[k] = v1[i];
        k++;
    }
    
    f(i,0,v2.size()) {
        v[k] = v2[i];
        k++;
    }

    unordered_map<int,int> mp;
    ll mex = 0, maxi = 0;
    ll ans = 0;

    f(i,0,n) {
        maxi = max(maxi,v[i]);
        
        mp[v[i]]++;

        while(mp[mex]) {
            mex++;
        }

        ans += (maxi+mex);
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