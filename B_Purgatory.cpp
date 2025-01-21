#include<iostream>
using namespace std;
int main() {
    int t,n,count;
    int *ar;
    cin >> t;
    while(t>0) {
        cin >> n;
        ar = new int[n];
        count = 0;
        for(int i=0;i<n;i++) {
            cin >> ar[i];
        }
        for(int j=0;j<n-1;j++) {
            if(ar[j]>ar[j+1]) {
                count = max(count,ar[j]);
            }
        }
        cout << count << endl;
        t--;
    }
}