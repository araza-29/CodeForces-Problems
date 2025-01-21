#include<iostream>
#include<map>
using namespace std;
int main() {
    int n,xD=0,yD=0;
    bool flag = false;
    map<int,int> x,y;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0;i<n;i++) {
        if(s[i]=='R') {
            xD = xD+1;
        }
        else if(s[i]=='L') {
            xD = xD-1;
        }
        else if(s[i]=='U') {
            yD = yD+1;
        }
        else if(s[i]=='D') {
            yD = yD-1;
        }
        x[yD]++;
        y[xD]++;
        if(x[yD]>1 || y[xD]>1) {
            flag = true; 
            break;
        }
    }
    if(flag == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}