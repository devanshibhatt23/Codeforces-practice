#include <bits/stdc++.h>
#include <string>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
#define yes cout << "YES"
#define no cout << "NO"
#define re return;
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a,b;
    cin >> a >> b;

    if(a == b) {
        yes;
        nn;
        re;
    }

    if(a.size() <= 2) {
        no;
        nn; re;
    }

    int ct0a=0, ct0b=0, ct1a=0, ct1b=0;
    vec evena, odda, evenb, oddb;

    f(i,0,n) {
        if(a[i] == 1) ct1a++;
        else ct0a++;

        if(b[i] == 1) ct1b++;
        else ct0b++;
    }

    if(ct1a != ct1b || ct0a != ct0b) {
        no; nn;
        re;
    }

    f(i,0,n) {
        if(i % 2) {
            odda.push_back(a[i]);
            oddb.push_back(b[i]);
        }
        else {
            evena.push_back(a[i]);
            evenb.push_back(b[i]);
        }
    }

    s(odda);
    s(evena);
    s(oddb);
    s(evenb);

    if(odda == oddb && evena == evenb) {
        yes;
        nn;
    }
    else {
        no;
        nn;
    }
}
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}