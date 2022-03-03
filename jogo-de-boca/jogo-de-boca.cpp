#include <bits/stdc++.h>
#include <string>
using namespace std;

short int toint(char c) { return c-48; }

short int horner(string s) {
    short int m=0;
    for (string::iterator i=s.end()-1; i>=s.begin(); i--) {
        m = (m*10 + toint(*i)) % 3;
    }
    return m;
}

int main() {
    string s;
    cin>>s;
    printf("%hd\n", horner(s));
}