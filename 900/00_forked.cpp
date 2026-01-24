#include <bits/stdc++.h>
#include <set>
using namespace std;

void devanshi() {
    int a,b,kx,ky,qx,qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;

    if(a==b) {
        pair<int,int> k1,k2,k3,k4;
        k1 = {kx+a, ky+b};
        k2 = {kx+a, ky-b};
        k3 = {kx-a, ky+b};
        k4 = {kx-a, ky-b};

        set<pair<int,int>> sk({k1,k2,k3,k4});

        pair<int,int> q1,q2,q3,q4;
        q1 = {qx+a, qy+b};
        q2 = {qx+a, qy-b};
        q3 = {qx-a, qy+b};
        q4 = {qx-a, qy-b};

        set<pair<int,int>> sq({q1,q2,q3,q4});

        int count = 0;
        for(auto it1=sk.begin(); it1!=sk.end(); it1++) {
            for(auto it2=sq.begin(); it2!=sq.end(); it2++) {
                if((it1->first == it2->first) && (it1->second == it2->second)) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    else {
        pair<int,int> k1,k2,k3,k4,k5,k6,k7,k8;
        k1 = {kx+a, ky+b};
        k2 = {kx+a, ky-b};
        k3 = {kx-a, ky+b};
        k4 = {kx-a, ky-b};
        k5 = {kx+b, ky+a};
        k6 = {kx+b, ky-a};
        k7 = {kx-b, ky+a};
        k8 = {kx-b, ky-a};

        set<pair<int,int>> sk({k1,k2,k3,k4,k5,k6,k7,k8});

        pair<int,int> q1,q2,q3,q4,q5,q6,q7,q8;
        q1 = {qx+a, qy+b};
        q2 = {qx+a, qy-b};
        q3 = {qx-a, qy+b};
        q4 = {qx-a, qy-b};
        q5 = {qx+b, qy+a};
        q6 = {qx+b, qy-a};
        q7 = {qx-b, qy+a};
        q8 = {qx-b, qy-a};

        set<pair<int,int>> sq({q1,q2,q3,q4,q5,q6,q7,q8});

        int count = 0;
        for(auto it1=sk.begin(); it1!=sk.end(); it1++) {
            for(auto it2=sq.begin(); it2!=sq.end(); it2++) {
                if((it1->first == it2->first) && (it1->second == it2->second)) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        devanshi();
    }
}