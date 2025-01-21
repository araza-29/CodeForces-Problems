#include<iostream>
using namespace std;
int main() {
    int n,t;
    int *ar;
    cin >> t;
    while(t>0) {
        cin >> n;
        ar = new int[n];
        for(int i=0;i<n;i++) {
            cin >> ar[i];
        }
        for(int i=0;i<n-1;i++) {
            if(ar[i]==1) {
                ar[i]++;
                if(i-1>=0 && ar[i]%ar[i-1]==0) {
                    ar[i]++;
                }
            }
            if(ar[i+1]%ar[i]==0) {
                ar[i+1]++;
            }
        }
        for(int i=0;i<n;i++) {
            cout << ar[i] << " ";
        }
        cout << endl;
        t--;
    }
}