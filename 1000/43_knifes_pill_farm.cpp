#include <bits/stdc++.h>
#include <queue>
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
    int n,m;
    cin >> n >> m;
    
    vec v(n);
    f(i,0,n) ci;
    
    priority_queue<int> pq;

    ll ans = INT64_MIN;
    ll sum = 0;

    f(i,0,n) {
        if(pq.size() == m-1) {
            ans = max(ans, m*v[i]-sum);
        }

        sum += v[i];
        pq.push(v[i]);

        if(pq.size() == m) {
            sum -= pq.top();
            pq.pop();
        }
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