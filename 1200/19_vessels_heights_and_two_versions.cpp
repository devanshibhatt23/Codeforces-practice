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

    f(i,0,n) {
        vec pref1(n), pref2(n);

        f(j,1,n) {
            pref1[(i+j)%n] = max(pref1[(i+j-1)%n], v[(i+j-1)%n]);
        }

        f(j,1,n) {
            pref2[(i+n-j)%n] = max(pref2[(i+n-j+1)%n], v[(i+n-j)%n]);
        }

        ll sum = 0;
        f(j,0,n) {
            sum += min(pref1[j],pref2[j]);
        }

        cout << sum << " ";
    }
    
    nn;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}