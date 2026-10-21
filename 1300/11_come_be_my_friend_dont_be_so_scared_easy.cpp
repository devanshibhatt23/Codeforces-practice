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

    if(n == 1) {
        cout << "0\n";
        re;
    }

    cout << (n+1)/2;
    nn;

    int k = (n+1)/2;

    for(int i=0; i<k; i++) {
        cout << i+1 << " " << i+k;
        nn;
    }
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}