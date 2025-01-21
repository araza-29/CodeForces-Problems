#include<iostream>
#include<map>
using namespace std;
int main() {
    int t,n;
    bool flag = false;
    map<int,int> x;
    map<int,int> y;
    int sheet[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin >> sheet[i][j];
            x[sheet[i][j]] = i;
            y[sheet[i][j]] = j;
        }
    }
    cin >> n;
    int *bingo = new int[n];
    for(int i=0;i<n;i++) {
        cin >> bingo[i];
        int j = x[bingo[i]];
        int k = y[bingo[i]];
        sheet[j][k] = -1;
    }
    for(int i=0;i<3;i++) {
        if(sheet[i][0]==-1) {
            if(sheet[i][1]==-1 && sheet[i][2]==-1) {
                flag = true;
                break;
            }
            else if(i==2 && sheet[i-1][1]==-1 && sheet[i-2][2]==-1){
                flag = true;
                break;
            }
            else if(i==0 && sheet[i+1][1]==-1 && sheet[i+2][2]==-1) {
                flag = true;
                break;
            }
        }
        if(sheet[0][i]==-1 && sheet[1][i] == -1 && sheet[2][i]==-1) {
            flag = true;
            break;
        }
    }
    if(flag == true) {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}