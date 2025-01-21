#include<iostream>
using namespace std;
int main() {
    string x,y;
    cin >> x >> y;
    int a = x[x.size()-1]-48;
    int b = y[y.size()-1]-48;
    if((a%2==0 && b%2==0) || (a%2==1 && b%2==1)) {
        cout << "Black";
    }
    else{
        cout << "White";
    }
}