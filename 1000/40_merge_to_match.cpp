#include <bits/stdc++.h>
#include <iomanip>
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
    int n,m;
    cin >> n >> m;

    vec a(n), b(m);
    f(i,0,n) cin >> a[i];
    f(i,0,m) cin >> b[i];

    s(a), s(b);

    if(2*m > n || b[0] < a[0] || b[m-1] > a[n-1]) {
        no;
        re;
    }

    int i=0;

    while(i<m && a[i]<b[i] && b[i]<a[n-m+i]) i++;

    if(i < m) no;
    else yes;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}