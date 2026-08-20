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

    int r = n-k;

    if(k == n-1) {
        cout << "-1\n";
        re;
    }

    int zeros = n/2, ones = n/2;
    int zero_block = r/2, one_block = r/2;
    if(n % 2) zeros++;
    if(r % 2) zero_block++;

    int remaining0 = zeros - zero_block;
    int remaining1 = ones - one_block;

    string s;
    f(i,0,remaining0+1) s.push_back('0');
    f(i,0,remaining1+1) s.push_back('1');

    int i = 0;

    while(s.size() < n) {
        if(i%2 == 0) s.push_back('0');
        else s.push_back('1');
        i++;
    }

    cout << s << "\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}