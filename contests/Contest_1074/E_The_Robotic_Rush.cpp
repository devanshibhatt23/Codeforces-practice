#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n,m,k;
    cin >> n >> m >> k;

    vec robots(n);
    f(i,0,n) cin >> robots[i];

    vec spikes(m);
    f(i,0,m) cin >> spikes[i];

    string s;
    cin >> s;

    int ans = n;

    vector<int> dead(n);
    map<int,vector<int>> location;
    
    s(spikes);

    f(i,0,n) {
        if(spikes[0] < robots[i]) {
            int left = robots[i] - *(lower_bound(spikes.begin(), spikes.end(), robots[i]) - 1);
            location[-left].push_back(i);
        }
        if(spikes[m-1] > robots[i]) {
            int right = *(lower_bound(spikes.begin(), spikes.end(), robots[i])) - robots[i];
            location[right].push_back(i);
        }
    }

    int alive = n, pos = 0;
    f(i,0,k) {
        if(s[i] == 'R') pos++;
        else pos--;

        for(int i : location[pos]) {
            if(dead[i] == 0) {
                dead[i] = 1;
                alive--;
            }
        }
        location[pos].clear();
        cout << alive << " ";
    }
    cout << "\n";
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}