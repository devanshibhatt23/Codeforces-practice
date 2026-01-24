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
    
    vec v(n);
    f(i,0,n) ci;

    int val1 = 1, val2 = n;
    int st = 0, end = n-1;

    if(n==1 || n==2) {
        cout << "-1\n";
        return;
    }
    else {
        while(st < end) {
            if(v[st]==val1 && v[end]==val2 || v[st]==val2 && v[end]==val1) {
                val1++, val2--;
                st++, end--;
            }
            else if(v[st]==val1 || v[st]==val2) {
                if(v[st]==val1) val1+=1;
                else val2--;
                st++;
            }
            else if(v[end]==val1 || v[end]==val2) {
                if(v[end]==val1) val1++;
                else val2--;
                end--;
            }
            else {
                cout << st+1 << ' ' << end+1 << endl;
                return;
            }
        }
        cout << "-1\n";
    }
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}