#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n,q;
    cin >> n >> q;

    while(q--) {
        int a,b;
        cin >> a >> b;

        if(a == b) {
            cout << "0\n";
            continue;
        }

        if((a & b) == 0) {
            cout << a + b << "\n";
            continue;
        }

        // int sum = a+b; 
        // a = max(a,b);
        // b = sum-a;

        int ans = 1e18;
        for(int i=0; i<32; i++){
            if((a & (1<<i)) == 0){
                if((b & (1<<i)) == 0){
                    if((1<<i) > n) break;
                    ans = min(ans,(1<<i)*1LL);
                }
                else{
                   for(int k=0; k<32; k++){
                        if((((1<<i) & (1<<k)) == 0) && ((b & (1<<k)) == 0)){
                            if((1<<i) > n || (1<<k) > n) break;
                            ans = min(ans,((1<<i) + (1<<k))*1LL);
                        }
                   }
                }
            }
        }

        if(ans == 1e18) cout << -1 << "\n";
        else cout << a+2*ans+b << "\n";
    }
}