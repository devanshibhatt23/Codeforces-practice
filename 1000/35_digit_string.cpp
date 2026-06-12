 #include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    int ct_4 = 0;
    
    f(i,0,n) if(s[i] == '4') ct_4++;
    int ans = ct_4;

    vec odd_before(n+1,0);
    vec even_after(n+1,0);

    f(i,0,n) {
        if(s[i] == '1' || s[i] == '3') odd_before[i+1]++;
        odd_before[i+1] += odd_before[i];
    }

    for(int i=n-1; i>=0; i--) {
        if(s[i] == '2') even_after[i]++;
        even_after[i] += even_after[i+1];
    }

    int add = INT_MAX;
    f(i,0,n+1) add = min(add, even_after[i]+odd_before[i]);

    ans += add;
    en;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}