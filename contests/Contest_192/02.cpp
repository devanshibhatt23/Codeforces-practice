#include <bits/stdc++.h>
#define ll long long
#define f(i,s,e) for(int i=s; i<e; i++)
#define en cout << ans << "\n"
#define nn cout << "\n"
#define vec vector<ll> 
#define ci cin >> v[i];
#define s(v) sort(v.begin(), v.end())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define re return;
using namespace std;

void solve() {
    int n;
    cin >> n;

    vec v(n);
    f(i,0,n) ci;
    
    int ct1 = 0;

    f(i,0,n) {
        if(v[i] == 1) ct1++;
        else ct1--;

        if(ct1 >= 0) {
            int ct3 = 0;

            f(j,i+1,n-1) {
                if(v[j] == 3) ct3++;
                else ct3--;
                
                if(ct3 <= 0) {
                    yes;
                    re;
                }
            }
        }
    }

    no;
}

// void solve() {
//     int n;
//     cin >> n;

//     vec v(n);
//     f(i,0,n) ci;
    
//     int ct1 = 0;
//     vec a;

//     f(i,0,n-2) {
//         if(v[i] == 1) ct1++;
//         else ct1--;

//         if(ct1 >= 0) {
//             a.push_back(i);
//         }
//     }

//     int ct3 = 0;
//     unordered_map<int,pair<int,int>> m;

//     f(i,1,n-1) {
//         if(v[i] == 3) ct3++;
//         else ct3--;


//     }
// }

// void solve() {
//     int n;
//     cin >> n;

//     vec v(n);
//     f(i,0,n) ci;
    
//     int ct1 = 0, ct2 = 0, ct3 = 0;

//     f(i,0,n-1) {
//         if(v[i] == 1) ct1++;
//         else if(v[i] == 2) ct2++;
//         else ct3++;
//     }

//     for(int i=n-1; i>=0; i--) {
//         if(v[i] == 1) ct1--;
//         else if(v[i] == 2) ct2--;
//         else ct3--;

//         int k = (ct1-ct3);
    
//         if(ct2 == 0 && ct1 >= ct3) {
//             yes;
//             re;
//         }
    
//         f(i,0,ct2+1) {
//             int x = i, y = ct2-i;
    
//             if(k >= x-y) {
//                 yes;
//                 re;
//             }
//         }
//     }

//     no;
// }
 
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }
}