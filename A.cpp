#include<iostream>
using namespace std;
int main() {
    int t,n,min;
    int *ar;
    cin >> t;
    while(t>0) {
        cin >> n;
        ar = new int[n];
        for(int i=0;i<n;i++) {
            cin >> ar[i];
        }
        for(int i=0;i<n-1;i++) {
            if((ar[i+1]-ar[i])>min) {
                min = (ar[i+1]-ar[i]);
            }
            else if((ar[i+1]-ar[i])==min) {
                min++;
            }
        }
        cout << min << endl;
        t--;
    }
}