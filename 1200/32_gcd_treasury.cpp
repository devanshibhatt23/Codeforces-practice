#include <bits/stdc++.h>
#include <queue>
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
    int n,x;
    cin >> n >> x;

    vec v(n);
    f(i,0,n) cin >> v[i];

    vec primes;
    int temp = x;

    for(int i=2; i*1LL*i <= temp; i++) {
        if(temp%i == 0) {
            primes.push_back(i);
        }
        while(temp%i == 0) {
            temp /= i;
        }
    }

    if(temp > 1) {
        primes.push_back(temp);
    }

    ll ans = 0;

    f(i,0,primes.size()) {
        ll sum = 0;

        f(j,0,n) {
            if(v[j] % primes[i] == 0) {
                sum += v[j];
            }
        }

        ans = max(ans,sum);
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