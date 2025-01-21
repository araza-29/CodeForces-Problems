#include<iostream>
using namespace std;
int main() {
    int x,y;
    cin >> x >> y;
    if(((x*x)+(y*y)+1)%4==0){
        cout << ((x*x)+(y*y)+1)/4;
    }
    else {
        cout << -1;
    }
}