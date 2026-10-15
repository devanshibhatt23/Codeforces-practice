#include <bits/stdc++.h>
#include <stack>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define r(i,e,s) for(int i=e; i>=s; i--)
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
    int n,k,x,m;
    cin >> n >> k >> x >> m;

    vec v(n);
    f(i,0,n) cin >> v[i];

    multiset<int> st;

    for(int i=0; i<k-1; i++) st.insert(v[i]);

    for(int i=k-1; i<x-1; i++) {
        st.insert(v[i]);

        m -= *st.begin();
        st.erase(st.begin());
    }

    m -= v[x-1];
    if(m < 0) {
        cout << "0\n";
        re;
    }

    st.clear();

    f(i,0,n) {
        if(i != x-1) st.insert(v[i]);
    }

    int sum = v[x-1];

    f(i,0,n-k) {
        sum += *st.begin();
        st.erase(st.begin());
    }

    int ans = 1 + m/sum;
    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}