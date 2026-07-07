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

    map<int,int> mp1, mp;
    f(i,0,n) mp1[v[i]]++;

    vec a;

    for(auto it : mp1) {
        a.push_back(it.second);
    }

    for(int i : a) {
        mp[i]++;
    }

    int ans = 0;
    int val1 = n, val2 = a.size();
    
    for(auto it : mp) {
        auto [freq,num] = it;
        
        if(val2 > 0) {
            int diff = k - val1;

            if(diff % val2 == 0) {
                if(diff / val2 + freq >= 1) {
                    ans++;
                }
            } 
        }

        val2 -= num;
        val1 -= freq*num;
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