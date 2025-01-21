#include<iostream>
using namespace std;
int main() {
    int t,n,sum;
    int *ar;
    cin >> t;
    while(t>0){
        cin >> n;
        ar = new int[n];
        sum = 0;
        for(int i=0;i<n;i++) {
            cin >> ar[i];
        }
        for(int i=0;i<n;i++) {
            if(i%2==0) {
                sum+=ar[i];
            }
            else {
                sum-=ar[i];
            }
        }
        cout << sum << endl;
        t--;
    }
}