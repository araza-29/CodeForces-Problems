#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
int main() {
    int n,m,t,l,r,max;
    char c;
    cin >> t;
    while(t>0) {
        cin >> n >> m;
        vector<int> ar(n);
        for(int i=0;i<n;i++) {
            cin >> ar[i];
        }
        max = *max_element (ar.begin(), ar.end());
        for(int i=0;i<m;i++) {
            cin >> c >> l >> r;
            if(max>=l && max<=r) {
                if(c == '+') {
                    max++;
                }
                else if(c == '-') {
                    max--;
                }
            }
            cout << max << " ";
        }
        cout << endl;
        t--;
    }
}