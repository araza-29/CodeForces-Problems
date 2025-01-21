#include<iostream>
using namespace std;
int main() {
    int t,n,num;
    long long sum,max;
    long long* ar;
    cin >> t;
    while(t>0) {
        cin >> n;
        ar = new long long[n];
        num = 0;
        sum = 0;
        max = 0;
        for(int i=0;i<n;i++) {
            cin >> ar[i];
            if(ar[i]>=max) {
                sum += max;
                max = ar[i];
            }
            if(ar[i]!=max) {
                sum += ar[i];
            }
            if(sum == max) {
                num++;
            }
        }
        cout << num << endl;
        t--;
    }
}