#include<iostream>
using namespace std;
int main() {
    int n,x,y,count = 0;
    cin >> n >> x >> y;
    if((x/y)>=1){
        count = (n/y)*x;
        n%=y;
    }
    count += n;
    cout << count;
}