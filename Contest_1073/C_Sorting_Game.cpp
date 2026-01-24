#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string str = s;
    sort(str.begin(), str.end());

    if(s == str) {
        cout << "Bob\n";
        return;
    }

    vec idx;
    f(i,0,n) {
        if(s[i] != str[i]) idx.push_back(i);
    }

    cout << "Alice\n" << idx.size() << "\n";
    f(i,0,idx.size()) cout << idx[i]+1 << " ";
    cout << "\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}
