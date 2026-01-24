#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    string a,b;
    cin >> a >> b;

    if(a==b) {
        cout << "0\n";
        return;
    }

    int n = a.size(), m = b.size();

    string ans;
    int maxi = 0;

    for(int i=0; i<a.size(); i++) {
        for(int j=0; j<b.size(); j++) {
            int k = 0;
            while(i+k < a.size() && j+k < b.size() && a[i+k]==b[j+k]) k++;
            if(k > maxi) {
                maxi = k;
                ans = a.substr(i,k);
            }
        }
    }


    if(ans.empty()) cout << a.size() + b.size() << endl;
    else {
        int si, ei, si2, ei2;

        si = a.find(ans);
        si2 = b.find(ans);
        ei = si + maxi;
        ei2 = si2 + maxi;

        cout << si + si2 + n + m - ei - ei2 << endl;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}