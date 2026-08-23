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
    string s;
    cin >> s;

    int n = s.size();
    sort(s.begin()+1, s.end());

    int sum = (s[0] - '0');
    int ans1 = 0;

    f(i,1,n) {
        sum += (s[i] - '0');
        
        if(sum > 9) {
            ans1 = n-i;
            break;
        }
    }

    sum = 1;
    int ans2 = 1;

    f(i,1,n) {
        sum += (s[i] - '0');

        if(sum > 9) {
            ans2 += (n-i);
            break;
        }
    }

    cout << min(ans1,ans2);
    nn;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}