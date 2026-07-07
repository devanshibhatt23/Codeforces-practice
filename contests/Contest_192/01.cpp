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

    int ct3 = 0, ct2 = 0;

    f(i,0,n) {
        if(v[i] >= 3) {
            ct3++;
        }
        else if(v[i] == 2) ct2++;
    }

    if(ct3) {
        yes; 
        re;
    }

    if(ct2 >= 2)  {
        yes;
        re;
    }

    no;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}