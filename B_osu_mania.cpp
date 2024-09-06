#include<iostream>
using namespace std;
int main() {
    int t,n;
    char **ar;
    cin >> t;
    while(t>0) {
        cin >> n;
        ar = new char*[n];
        for(int i=0;i<n;i++) {
            ar[i] = new char[4];
            for(int j=0;j<4;j++) {
                cin >> ar[i][j];
            }
        }
        for(int i=n-1;i>=0;i--) {
            for(int j=0;j<4;j++) {
                if(ar[i][j] == '#') {
                    cout << j+1 << " ";
                }
            }
        }
        cout << endl;
        t--;
    }
}