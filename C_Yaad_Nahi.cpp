#include<iostream>
#include<map>
using namespace std;
int main() {
    int num;
    cin >> num;
    string *s = new string[num];
    map <string,int> str;
    for(int i=0;i<num;i++) {
        cin >> s[i];
        str[s[i]]++;
    }
    for(int i=0;i<num;i++) {
        cout << s[i];
        if(str[s[i]]!=0) {
            cout << "("+
        }
    }
}