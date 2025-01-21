#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int,int> a;
    string s;
    cin >> s;
    int balance = 0;
    for(int i=0;i<s.length();i++) {
        a[i]=balance;
        if(s[i]=='(') {
            balance++;
        }
        else {
            balance--;
        }
    }
    int temp,max;
    char ctemp;
    for(int i=0;i<s.length();i++) {
        int j = i-1;
        max = a[j];
        while(max>a[j])
            a[j+1] = a[j];
            s[j+1] = s[j];
        }
        a[j+1] = max;
    }
    cout << s << endl;
}