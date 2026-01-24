#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;

    vec v(n);
    f(i,0,n) ci;

    if(k==1) {
        cout << 0 << '\n';
        return;
    }

    vector<vec> a;

    f(i,1,k+1) {
        vec color;
        int bef = 0;
        int j;
        f(j,0,n) {
            if(v[j]==i) {
                color.push_back(j-bef);
                bef = j;
            }
        }
        color.push_back(n-bef-1);
        // color.push_back(n-bef);
        a.push_back(color);
    }

    for(int i=0; i<k; i++) {
        for(int j=1; j<a[i].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}