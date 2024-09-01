#include<iostream>
using namespace std;
int main () {
    int t,l,r,L,R, doors,i, cond;
    cin >> t;
    while(t>0) {
        doors = 0;
        cin >> l >> r;
        cin >> L >> R;
        if(L>=r+1 || l>=R+1){
            doors++;
        }
        else if(l==L && r==R) {
            doors=R-L;
        }
        else{
            if(l==L) {
                i = L;
            }
            else {
                i=max(l, L)-1;
            }
            if(r == R) {
                cond = min(r,R)-1;
            }
            else {
                cond = min(r,R);
            }
            for(;i<=cond;i++) {
                doors++;
            }
        }
        cout << doors << endl;
        t--;
    }
}