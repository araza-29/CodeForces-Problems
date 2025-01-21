#include<iostream>
using namespace std;
int main(){
    string s;
    string k;
    cin >> s;
    for(int i=0,j=0;i<s.length();i++) {
        if(s[i]!='.') {
            k.push_back(s[i]);
            j++;
        }
    }
    cout << k;
}
