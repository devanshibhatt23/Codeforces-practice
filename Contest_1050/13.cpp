#include <bits/stdc++.h>
using namespace std;

int devanshi() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> a(0), b(0);

    int counta = 0, countb = 0, totala = 0, totalb = 0;

    for(int i=0; i<n; i++) {
        if(s[i] == 'a') {
            counta++;
            if(countb) b.push_back(countb);
            countb = 0;
            totala++;
        }
        else {
            countb++;
            if(counta) a.push_back(counta);
            counta = 0;
            totalb++;
        }
    }
    if(counta) a.push_back(counta);
    if(countb) b.push_back(countb);

    if(totala == totalb) {
        cout << "0\n";
        return 0;
    }

    else if(totala == n || totalb == n) {
        cout << "-1\n";
        return 0;
    }

    else if(totala > totalb) {
        for(int i : a) {
            if(i == totala-totalb) {
                cout << i << endl;
                return 0;
            }
        }
    }

    else {
        for(int i : b) {
            if(i == totalb-totala) {
                cout << i << endl;
                return 0;
            }
        }
    }

    int p = totala - totalb;
    
    if(p > 0) {
        int x = p+1;
        while(x != totala) {
            int y = x - p, acount = 0, bcount = 0;

            for(int i=0; i<n; i++) {
                for(int j=i; j<i+x+y; j++) {
                    if(s[j] == 'a') acount++;
                    else bcount++;
                }
                if(acount==x && bcount==y) {
                    cout << x + y << endl;
                    return 0;
                }
            }
            x++;
        }
    }

    else {
        p = totalb - totala;
        int x = p+1;

        while(x != totalb) {
            
            for(int i=0; i<n; i++) {
                int y = x - p, acount = 0, bcount = 0;
                for(int j=i; j<i+x+y; j++) {
                    if(s[j] == 'a') acount++;
                    else bcount++;
                }
                if(bcount==x && acount==y) {
                    cout << x + y << endl;
                    return 0;
                }
            }
            x++;
        }
    }

    cout << "-1\n";
}

int main() {
    int t=1;
    cin >> t;
    while(t--) {
        devanshi();
    }
}