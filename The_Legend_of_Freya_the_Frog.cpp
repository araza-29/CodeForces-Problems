#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int op,t;
    int x,y,k;
    cin >> t;
    while(t>0) {
        cin >> x >> y >> k;
        op = 0;
        if(x!=0 || y!=0) {
            if(((x+k-1)/k)>((y+k-1)/k)) {
                op = ((x+k-1)/k)+ ((y+k-1)/k) + (((x+k-1)/k)-(((y+k-1)/k)+1));
            }
            else if(x == y) {
                op = ((x+k-1)/k)+ ((y+k-1)/k);
            }
            else {
                op = ((x+k-1)/k) + ((y+k-1)/k) + (((y+k-1)/k)-((x+k-1)/k));
            }
        }
        cout << op << endl;
        t--;
    }
}