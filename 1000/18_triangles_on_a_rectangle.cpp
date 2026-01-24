#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    int w,h;
    cin >> w >> h;

    int q = 5;
    vector<int> h1;
    vector<int> h2;
    vector<int> v1;
    vector<int> v2;

    while(q--) {
        if(q==4) {
            int k;
            cin >> k;
            while(k--) {
                int x; cin >> x;
                h1.push_back(x);
            }
        }
        else if(q==3) {
            int k;
            cin >> k;
            while(k--) {
                int x; cin >> x;
                h2.push_back(x);
            }
        }
        else if(q==2) {
            int k;
            cin >> k;
            while(k--) {
                int x; cin >> x;
                v1.push_back(x);
            }
        }
        else if(q==1) {
            int k;
            cin >> k;
            while(k--) {
                int x; cin >> x;
                v2.push_back(x);
            }
        }
        else break;
    }

    // for(int i : h1) cout << i << " ";
    // cout << endl;

    int p = h1.size();
    int z = h2.size();
    int r = v1.size();
    int s = v2.size();

    long long area1 = max(h*1LL*(h1[p-1]-h1[0]), h*1LL*(h2[z-1]-h2[0]));
    long long area2 = max(w*1LL*(v1[r-1]-v1[0]), w*1LL*(v2[s-1]-v2[0]));

    cout << max(area1, area2) << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}