#include<iostream>
using namespace std;
int main() {
    int t,n,m;
    bool flag;
    char map[26];
    int* cMap;
    int* ar;
    string* str;
    cin >> t;
    while(t>0) {
        cin >> n;
        return 0;
        ar = new int[n];
        cMap = new int[26];
        for(int i=0;i<n;i++) {
            cin >> ar[i];
        }
        cin >> m;
        str = new string[m];
        for(int i=0;i<m;i++) {
            cin >> str[i];
        }
        for(int i=0;i<26;i++) {
            map[i] = ' ';
            cMap[i] = 0;
        }
        for(int j=0;j<m;j++){
            flag = true;
            if(n == str[j].length()){
                for(int i=0;i<n;i++) {
                    if(cMap[str[j][i]%97]==0 && map[((ar[i] % 10) + 10) % 10] == ' ') {
                        cMap[str[j][i]%97] = ar[i];
                        map[((ar[i] % 10) + 10) % 10] = str[j][i];
                    }
                    else if(cMap[str[j][i]%97] == ar[i] && map[((ar[i] % 10) + 10) % 10] == str[j][i]){
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
        }
        t--;
    }
}