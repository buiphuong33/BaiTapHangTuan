#include <bits/stdc++.h>
using namespace std;
bool XauDoiXung(string s) {
    int n= s.length();
    for (int i=0; i<n/2; i++) {
        if(s[i]!=s[n-1-i]) return false;
    }
    return true;
}
int main() {
    string s;
    cin >> s;
    if (XauDoiXung(s)) cout << "yes";
    else cout << "no";
}
