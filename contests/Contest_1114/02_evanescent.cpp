#include <bits/stdc++.h>
#include <map>
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

    string s;
    cin >> s;

    vector<pair<int,char>> a;

    int ct = 0;

    f(i,0,n) {
        if(i == 0) {
            ct++;
        }
        else {
            if(s[i] == s[i-1]) ct++;
            else {
                a.push_back({s[i-1],ct});
                ct = 1;
            }
        }
    }

    if(ct) a.push_back({s[n-1],ct});

    int dis = a.size();

    bool found = 0;

    f(i,1,a.size()-1) {
        if(a[i].second == 1) {
            found = 1;
            char x = a[i-1].first;
            char y = a[i+1].first;

            if(x == y) {
                cout << dis-2;
                nn; re;
            }
            else continue;
        }
    }

    if(a.size() <= 2) {
        cout << a.size();
        nn;
        re;
    }

    if(found == 0) {
        cout << dis;
        nn; re;
    }
    
    cout << dis-1;
    nn;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}