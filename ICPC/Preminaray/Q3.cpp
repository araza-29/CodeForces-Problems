#include<iostream>
using namespace std;
int main() {
    int n,moves;
    char order[3]{' ',' ',' '};
    int h[3],s[3],f[3];
    cin >> n;
    while(n>0) {
        for(int i=0;i<3;i++){
         cin >> s[i] >> f[i] >> h[i];
        }
        if (s[0] >= s[1] && s[0] >= s[2]) {
            moves += s[1] + s[2];
            order[0] = 'S';
        } else if (s[1] >= s[2]) {
            moves += s[0] + s[2];
            order[1] = 'S';
        } else {
            moves += s[0] + s[1];
            order[2] = 'S';
        }
        if (h[0] >= h[1] && h[0] >= h[2] && order[0] == ' ') {
            moves += h[1] + h[2];
            order[0] = 'H';
        } else if (h[1] >= h[2] && order[1] == ' ') {
            moves += h[0] + h[2];
            order[1] = 'H';
        } else if (order[2] == ' ') {
            moves += h[0] + h[1];
            order[2] = 'H';
        }
        if (f[0] >= f[1] && f[0] >= f[2] && order[0] == ' ') {
            moves += f[1] + f[2];
            order[0] = 'F';
        } else if (f[1] >= f[2] && order[1] == ' ') {
            moves += f[0] + f[2];
            order[1] = 'F';
        } else if (order[2] == ' ') {
            moves += f[0] + f[1];
            order[2] = 'F';
        }
         for(int i=0;i<3;i++) {
            cout << order[i];
         }
         cout << " " << moves << endl;
        n--;
    }
}