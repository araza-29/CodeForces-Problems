#include<iostream>
using namespace std;
int main() {
    string s,t;
    int count = 0;
    cin >> s;
    for(int i=0,k=0;i<s.length();i++) {
        if(s[i]!='|' && (count == 2 || count == 0)) {
            t.push_back(s[i]);
            k++;
        }
        else if(s[i]=='|'){
            count++;
        }
    }
    cout << t;
}