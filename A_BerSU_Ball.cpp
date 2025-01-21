#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n,m,count = 0;
    cin >> n;
    vector<int> ar(n);
    for(int i=0;i<n;i++) {
        cin >> ar[i];
    }
    cin >> m;
    vector<int> br(m);
    for(int i=0;i<m;i++) {
        cin >> br[i];
    }
    for(int i=0,j=0;i<ar.size();) {
        if(ar[i]==(br[j]-1) || (ar[i]-1)==br[j] || ar[i] == br[j]) {
            count++;
            ar.erase(ar.begin()+i);
            br.erase(br.begin()+j);
        }
        else if(j==br.size()-1){
            i++;
        }
        else {
            j++;
        }
    }
    cout << count << endl;
}