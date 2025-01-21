#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main() {
    int t,n,a,b,flag=0,rem,val;
    vector<int> ar;
    vector<int> br;
    cin >> t;
    while(t>0) {
        cin >> n;
        for(int i=0;i<n;i++) {
            cin >> val;
            ar.push_back(val);
        }
        for(int i=0;i<n;i++) {
            cin >> val;
            br.push_back(val);
        }
        if(ar == br) {
            cout << "Bob" << endl;
            t--;
            ar.clear();
            br.clear();
            continue;
        }
        reverse(ar.begin(), ar.end());       if(ar == br){
            cout << "Bob" << endl;
            t--;
            ar.clear();
            br.clear();
            continue;
        }
        cout << "Alice" << endl;
        ar.clear();
        br.clear();
        t--;
    }
}