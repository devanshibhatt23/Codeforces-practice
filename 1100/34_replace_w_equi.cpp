#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i]
#define s(v) sort(v.begin(), v.end())
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) ci;
    
    map<int,int> mp;
    f(i,0,n) mp[v[i]]++;

    for(auto i : mp) {
        if(i.second % i.first != 0) {
            cout << "-1\n";
            return;
        }
    }

    vector<vec> idx(n);
    f(i,0,n) idx[v[i]-1].push_back(i+1);
    
    vec ans(n);
    int val = 0;

    f(i,1,n+1) {
        f(j,0,idx[i-1].size()) {
            if(j % i == 0) val++;
            ans[idx[i-1][j] - 1] = val;
        }
    }

    f(i,0,n) cout << ans[i] << " ";
    cout << "\n";
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}