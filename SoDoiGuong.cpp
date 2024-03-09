#include <bits/stdc++.h>
using namespace std;
bool SoDoiGuong(string s) {
    int n= s.length();
    for (int i=0; i<n/2; i++) {
        if(s[i]!=s[n-1-i]) return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    int a, b;
    int count=0;

    do {
        cin >> a >> b;
        int dem=0;
        for (int i=a; i<=b; i++) {
            string stri= to_string(i);
            if(SoDoiGuong(stri)) dem++;
        }
        cout << dem << endl;
        count++;
    } while (count <n);
}
