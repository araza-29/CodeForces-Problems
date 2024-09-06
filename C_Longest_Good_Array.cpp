#include<iostream>
using namespace std;
int main() {
    int t,l,r,num;
    cin >> t;
    while(t>0) {
        cin >> l >> r;
        num = 0;
        for(int i=0;l<=r;i++,l+=i) {
            num++;
        }
        cout << num << endl;
        t--;
    }
}