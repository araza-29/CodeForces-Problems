#include<iostream>
#include<map>
using namespace std;
int main() {
    int n,musaddiq;
    cin >> n;
    int *ar = new int[n];
    map<int,int> m;
    for(int i=0;i<n;i++) {
        cin >> ar[i];
        m[ar[i]]++;
    }
    for(int i=0;i<n;i++) {
        if(m[ar[i]]==1) {
            musaddiq = ar[i];
        }
    }
    cout << musaddiq;
}