#include <bits/stdc++.h>
#include <set>
using namespace std;

void devanshi() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    // unordered_map<char, int>  m;
    // for(auto i : v) m[i]++;

    // long long ans = 0;
    // for(auto i : m) {
    //     if(i.second == 1) ans++;

    //     else if(i.second == 2) {
    //         for(int k=0; k<n; k++) {
    //             if(m[v[k]] == 3) {
    //                 ans++;  
    //                 break;
    //             }
    //         }
    //         ans += 2;
    //     }

    //     else if(i.second > 2) ans += 2;
    // }
    // cout << ans << endl;

    // vector<int> counts(0);

    // for(auto i : m) counts.push_back(i.second);

    // int count1 = 0, countother = 0;

    // for(int i : counts) {
    //     if(i == 1) {
    //         count1++;
    //     }
    //     else if(i == 2) ans ++;
    //     else if(i > 2) ans += 2;
    // }
    // cout << count1 + ans + 1 << endl;

    // int index;
    // for(int i=0; i<n; i++) {
    //     if(m[v[i]] == 0) {
    //         m[v[i]] ++;
    //         ans ++;
    //     }
    //     else {
    //         index = i;
    //         break;
    //     }
    // }

    // if(ans == n) {
    //     cout << ans << endl;
    //     return;
    // }

    // long long ans2 = 0;
    // unordered_map<char, int> m2;

    // for(int i=index; i<n; i++) {
    //     if(m2[v[i]] == 0) {
    //         m2[v[i]]++;
    //         ans2++;
    //     }
    // }
    // cout << ans + ans2 << endl;

    vector<int> pref(0), suff(0);

    set<char> st;
    for(int i=0; i<n; i++) {
        st.insert(s[i]);
        pref.push_back(st.size());
    }

    st.clear();

    for(int i=n-1; i>=0; i--) {
        st.insert(s[i]);
        suff.push_back(st.size());
    }

    reverse(suff.begin(), suff.end());
    
    int ans = 0;
    for(int i=0; i<n-1; i++) {
        ans = max(ans, pref[i] + suff[i+1]);
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