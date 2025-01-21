#include<iostream>
#include<map>
using namespace std;
int main() {
    int n,*x,*y,home,away;
    cin >>n;
    x = new int[n];
    y = new int[n];
    map <int,int> count;
    for(int i=0;i<n;i++) {
        cin >> x[i];
        cin >> y[i];
        count[x[i]]++;
    }
    for(int i=0;i<n;i++) {
        home = n-1;
        home += count[y[i]];
        away = (2*(n-1))-home;
        cout << home << " " << away << endl;
    }
}