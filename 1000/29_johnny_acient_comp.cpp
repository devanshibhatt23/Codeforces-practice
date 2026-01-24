#include <bits/stdc++.h>
using namespace std;

void devanshi() {
    long long a,b;
    cin >> a >> b;

    int ans = -1;

    if(a==b) ans = 0;

    else if(a>b) {
        if(a%b!=0) {
            ans = -1;
        }

        else {
            int ct = 0;
            while(a%2==0) {
                a /= 2;
                if(a%b==0) ct++;
                if(a<=b) break;
            }
    
            if(ct==0) ans = -1;
            else if(ct%3==0) ans = ct/3;
            else ans = ct/3 + 1;
        }
    }

    else {
        if(b%a!=0) {
            ans = -1;
        }

        else {
            int ct = 0;
            while(a*2 <= b) {
                a *= 2;
                if(b%a==0) ct++;
                if(a>=b) break;
            }
    
            if(ct==0) ans = -1;
            else if(ct%3==0) ans = ct/3;
            else ans = ct/3 + 1;
        }
    }

    cout << ans << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}