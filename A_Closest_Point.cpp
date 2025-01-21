#include<iostream>
using namespace std;
int main() {
    int t,n;
    int *ar;
    cin >> t;
    while(t>0) {
        cin >> n;
        ar = new int[n];
        for(int i=0;i<n;i++) {
            cin >> ar[i];
        }
        if(n==2) {
            if(ar[0]!=(ar[1]-1)) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "NO" << endl;
        }
        t--;
    }
}