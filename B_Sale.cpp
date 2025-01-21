#include<iostream>
using namespace std;
int main() {
    int n,m,temp,count = 0, cost = 0;
    cin >> n >> m;
    int *ar = new int[n];
    for(int i=0;i<n;i++) {
        cin >> ar[i];
    }
    for(int i=0;i<n;i++) {
        int max = ar[i];
        int j = i-1;
        while(j>=0 && ar[j]>max) {
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = max;
    }
    for(int i=0;ar[i]<0 && count<m;i++) {

        cost+=(-ar[i]);
        count++;
    }
    cout << cost << endl;
}