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
    int n,k;
    cin >> n >> k;

    vec v(n);
    f(i,0,n) ci;

    s(v);

    vector<pair<int,int>> a = {{v[0],1}};

    f(i,1,n) {
        if(v[i] == v[i-1]) a.back().second++;
        else a.push_back({v[i],1});
    }

    while(!a.empty()) {
        int n = a.size();
        auto [val,ct] = a[n-1];

        if(ct % 2 == 0) {
            yes; re;
        }
        
        if(n == 1) {
            no; re;
        }

        if((val - a[n-2].first) <= k) {
            yes; re;
        }

        a.pop_back();
    }
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}