#include<iostream>
using namespace std;

int main() {
    int t,n,min=0;
    float miles;
    float *ar;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> n;
        ar = new float[n+n];
        miles = 0;
        for(int i=0;i<n+n;i+=2) {
            cin >> ar[i];
            cin >> ar[i+1]; 
        }
        min = 0;
        for(int i=1,k=1;i<n+n && k<=n;i+=2,k++) {
            if(min<ar[i-1]){
                min = ar[i-1];
            }
            if(miles<((k)/ar[i])){
                miles = (k)/ar[i];
            }
            if(ar[i]<=min) {
                miles = -1;
                break;
            }
        }
        cout << "Case #" << i+1 << ": " << miles << endl;
    }
}