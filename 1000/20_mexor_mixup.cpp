#include <bits/stdc++.h>
#include <map>
using namespace std;

void devanshi() {
    int a, b;
    cin >> a >> b;

    // int ans = a;

    // if(a==b && b==1) cout << "3\n";
    // else if(a==1 && b==0) cout << "2\n";
    // else if(a==2 && b==0) cout << "3\n";
    // else if(a==2 && b==1) cout << "2\n";
    // else if(a==b) {
    //     if((a-1)%4 == 3) ans+=2; 
    //     else if((a-1)%4 == 2);
    //     else ans++;
    //     cout << ans << endl;
    // }
    // else {
    //     if((a-1)%4==0 && b==a-1) cout << ans << endl;
    //     else if((a-1)%4==1 && b==1) cout << ans << endl;
    //     else if((a-1)%4==2 && b==a) cout << ans << endl;
    //     else if((a-1)%4==3 && b==0) cout << ans << endl;
    //     else cout << ans+1 << endl;
    // }

    int xor_, n = (a-1) % 4;
    if(n==0) xor_ = a-1;
    else if(n==1) xor_ = 1;
    else if(n==2) xor_ = a;
    else xor_ = 0;

    if(b==xor_) cout << a << endl;
    // else if(a==b && xor_==0) cout << a+2 << endl; 
    else if((xor_ ^ b) != a) cout << a+1 << endl;
    else cout << a+2 << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}