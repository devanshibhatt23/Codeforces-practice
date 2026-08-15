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
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    int m = 2*n;

    vec arr(m,0);

    f(i,0,m) {
        if(s[i] == '1') {
            if(s[(i+1) % m] == '0') {
                arr[(i+1) % m] = 1;
            }
            else {
                arr[i] = 1;
            }
        }
    }

    int red = 0, blue = 0;
    
    f(i,0,m) {
        if(i%2 == 0 && arr[i] == 1) {
            blue++;
        }
        else if(i%2 == 1 && arr[i] == 1) {
            red++;
        }
    }

    cout << red << " " << blue;
    nn;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}