#include<iostream>
using namespace std;
int main() {
    int t,n,x,count;
    int*houses;
    cin >> t;
    while(t>0){
        cin >> n >> x;
        count = 0;
        houses = new int [n];
        for(int i=0;i<n;i++) {
            cin >> houses[i];
            if(houses[i]<x){
                count=i+1;
            }
        }
        cout << count << endl;
        t--;
    }
}