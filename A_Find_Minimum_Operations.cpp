#include<iostream>
using namespace std;
int main() {
    int t,n,k,num;
    cin >> t;
    while(t>0) {
        cin >> n;
        cin >> k;
        num = 0;
        while(n>0) {
            int i = 1;
            while(n>=i*k) {
                i*=k;
            }
            n-=i;
            num++;
        }
        t--;
    }
}