#include<iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    if(a==1) {
        if(b==2) {
            cout << 3;
        }
        else {
            cout << 2;
        }
    }
    else if(a==2) {
        if(b==1) {
            cout << 3;
        }
        else {
            cout << 1;
        }
    }
    else {
        if(b==1) {
            cout << 2;
        }
        else {
            cout << 1;
        }
    }
}