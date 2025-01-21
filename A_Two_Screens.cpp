#include<iostream>
using namespace std;
int main() {
    int q,time,i;
    string s,t;
    cin >> q;
    while(q>0) {
        cin >> s;
        cin >> t;
        time = 0;
        for(i=0;s[i]==t[i] && i<s.length() && i<t.length();i++) {
            time++;
        }
        if(time!=0){
            time++;
        }
        time+=s.length()-i;
        time+=t.length()-i;
        cout << time << endl;
        q--;
    }
}