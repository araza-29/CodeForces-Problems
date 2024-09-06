#include<iostream>
#include<map>
using namespace std;
int main() {
    int t,n,m;
    bool flag;
    map<char,int> mInt;
    map<int,char> mChar;
    int* ar;
    string* str;
    cin >> t;
    while(t>0) {
        cin >> n;
        ar = new int[n];
        for(int i=0;i<n;i++) {
            cin >> ar[i];
        }
        cin >> m;
        str = new string[m];
        for(int i=0;i<m;i++) {
            cin >> str[i];
        }
        for(int j=0;j<m;j++){
            flag = true;
            if(n == str[j].length()){
                for(int i=0;i<n;i++) {
                    if(mInt.count(str[j][i]) == 0 && mChar.count(ar[i]) == 0) {
                        mInt[str[j][i]] = ar[i];
                        mChar[ar[i]] = str[j][i];
                    }
                    else if(mInt[str[j][i]] == ar[i] && mChar[ar[i]] == str[j][i]){
                        continue;
                    }
                    else {
                        flag = false;
                        break;
                    }
                }
                if(flag == false){
                        cout << "NO" << endl;
                }
                else {
                    cout << "YES" << endl;
                }
            }
            else {
                cout << "NO" << endl;
            }
            mInt.clear();
            mChar.clear();
        }
        t--;
    }
}