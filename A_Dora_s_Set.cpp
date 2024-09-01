#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t,l,r,op;
    cin >> t;
    while(t>0) {
        cin >> l >> r;
        op = 0;
        vector<int> ar(r-l+1);
        for(int i=0;i<=(r-l);i++) {
            ar[i] = l+i;
        }
        for(int i=0;(i+2)<ar.size();) {
            if((ar[i])%2==0 && (ar[i+1])%2==1 && (ar[i+2])%2==0) {
                i++;
                continue;
            }
            else if((ar[i])%2==1 && (ar[i+1])%2==0 && (ar[i+2])%2==1){
                op++;
                ar.erase(ar.begin()+i,ar.begin()+i+3);
            }
            else {
                i++;
            }
        }
        cout << op << endl;
        t--;
    }
}