// chimpanzini bananini

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q;
    cin >> q;
    vector<int> v(0);
    while(q--) {
        int s;
        cin >> s;
        if(s==3) {
            int k;
            cin >> k;
            v.push_back(k);
        }

        else if(s==1) {
            reverse(v.begin(), v.begin()+v.size()-1);
            reverse(v.begin(), v.end());
        }

        else if(s==2) {
            reverse(v.begin(), v.end());
        }
        
        int rizz = 0;
        for(int i=0; i<v.size(); i++) {
            rizz += ((i+1)* (v[i]));
        }
        cout << rizz << "\n";
    }
}

int main() {
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
}