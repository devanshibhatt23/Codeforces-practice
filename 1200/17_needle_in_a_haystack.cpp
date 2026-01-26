#include <bits/stdc++.h>
#include <unordered_set>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<ll> 
#define ci cin >> v[i]
#define fi first
#define sec second
#define s(v) sort(v.begin(), v.end())
#define r(v) reverse(v.begin(), v.end())
using namespace std;

void solve() {
    string s,t;
    cin >> s >> t;

    string k = s;

    int j=0;
    vector<char> v;

    f(i,0,t.size()) {
        if(k.find(t[i]) != string::npos) {
            k[k.find(t[i])] = '0';
        }
        else v.push_back(t[i]);
    }

    s(v);
    // f(i,0,v.size()) cout << v[i];
    // cout << "\n";

    if(v.size() + s.size() != t.size()) {
        cout << "Impossible\n";
        return;
    }

    string ans;
    int i=0;
    j=0;

    while(ans.size() != t.size()) {
        if(i == v.size()) {
            ans.push_back(s[j]);
            j++;
        }
        else if(j == s.size()) {
            ans.push_back(v[i]);
            i++;
        }
        else if(v[i] < s[j]) {
            ans.push_back(v[i]);
            i++;
        }
        else {
            ans.push_back(s[j]);
            j++;
        }
    }
    en;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
}