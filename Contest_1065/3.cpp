#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define enn cout << "\n"
#define vec vector<int> 
#define ci cin >> v[i];
#define fi first
#define sec second
#define s(v) sort(v.begin(), v.end())
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec a(n), b(n);
    int a_ones = 0, b_ones = 0;

    f(i,0,n) {
        cin >> a[i];
        if(a[i] == 1) a_ones++;
    }

    f(i,0,n) {
        cin >> b[i];
        if(b[i] == 1) b_ones++;
    }

    f(i,0,n) {
        if(i % 2 == 0) {
            if(a_ones % 2 == 0 && b_ones % 2 == 1) {
                if(a[i] == 0 && b[i] == 1) {
                    swap(a[i], b[i]);
                    a_ones++, b_ones--;
                }
                else if(a[i] == 1 && b[i] == 0) {
                    swap(a[i], b[i]);
                    a_ones--, b_ones++;
                }
            }
        }
        else {
            if(a_ones % 2 == 1 && b_ones % 2 == 0) {
                if(a[i] == 0 && b[i] == 1) {
                    swap(a[i], b[i]);
                    a_ones++, b_ones--;
                }
                else if(a[i] == 1 && b[i] == 0) {
                    swap(a[i], b[i]);
                    a_ones--, b_ones++;
                }
            }
        }
    }

    int xor_a = 0, xor_b = 0;
    f(i,0,n) {
        xor_a ^= a[i];
        xor_b ^= b[i];
    }

    if(xor_a > xor_b) cout << "Ajisai\n";
    else if(xor_a < xor_b) cout << "Mai\n";
    else cout << "Tie\n";
}
 
int main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
}