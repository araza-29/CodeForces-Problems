#include<iostream>
#include<map>
using namespace std;
int main() {
    int n;
    int *ar,*br,*home,*away;
    cin >> n;
    ar = new int[n];
    br = new int[n];
    home = new int[n];
    away = new int[n];
    map <int,int> count;
    for(int i=0;i<n;i++) {
        cin >> ar[i];
        cin >> br[i];
        home[i] = 0;
        away[i] = 0;
        count[ar[i]]++;
        count[br[i]]++;
    }
    for(int i=0;i<n;i++) {
        home[i] = n-1;
        home[i] += count[];
    }
    for(int i =0;i<n;i++) {
        cout << home[i] << " " << away[i] << endl;
    }
}