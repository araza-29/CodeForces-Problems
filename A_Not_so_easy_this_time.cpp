#include<iostream>
using namespace std;
int main() {
    int t,n;
    int ar[]={6,2,5,5,4,5,6,3,7,6};
    cin >> t;
    while(t>0){
        cin >> n;
        for(int i=0;i<10 && n>0;i++) {
            if(i==0 && n%ar[i]==0) {
                for(int j=0;j<n/ar[i];j++) {
                    cout << i;
                }
                n%=ar[i];
                break;
            }
            else if(n==ar[i] && n%ar[i]==0) {
                cout << i;
                n/=ar[i]+1;
                break;
            }
        }
        for(int i=0;i<10 && n>0;i++) {
            if(n-ar[i]>=0) {
                cout << i;
                n-=ar[i];
            }
        }
        cout << endl;
        t--;
    }
}