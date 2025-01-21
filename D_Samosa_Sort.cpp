#include<iostream>
using namespace std;
int main(){
    int t,n,m,count = 0;
    cin >> n;
    int *ar = new int[n];
    for(int i=0;i<n;i++) {
        cin >> ar[i];
    }
    for(int i=n;i>0;i--) {
        for(int j=i;j>0 && ar[j]<=ar[j-1] && ar[j-1]!=1;){
            ar[j-1]--;
            count++;
        }
    }
    cout << count;
}