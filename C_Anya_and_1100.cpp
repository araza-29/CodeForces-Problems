#include<iostream>
#include<map>
using namespace std;
int main() {
    int t,n,x=0,y=0,count=0,before,after;
    int part[]={1,1,0,0};
    cin >> t;
    string *num;
    while(t>0){
        num = new string[1];
        count = 0;
        cin >> num[0];
        for(int i=0,j=0;(i+3)<num[0].size();i++) {
            if(num[0][i]=='1' && num[0][i+1]=='1' && num[0][i+2]=='0' && num[0][i+3]=='0'){
                count++;
            }
        }
        cin >> n;
        while(n>0) {
            cin >> x >> y;
            if(num[0][x-1]!=(y+'0')){
                for(int j = x-4;(j+3)<x+3 && (j+3)<num[0].size();j++) {
                    if(j<0){
                        j = 0;
                    }
                    if(num[0][j]=='1' && num[0][j+1]=='1' && num[0][j+2]=='0' && num[0][j+3]=='0'){
                        before++;
                    }
                }
                num[0][x-1] = (y+'0');
                for(int j = x-4;(j+3)<x+3 && (j+3)<num[0].size();j++) {
                    if(j<0){
                        j = 0;
                    }
                    if(num[0][j]=='1' && num[0][j+1]=='1' && num[0][j+2]=='0' && num[0][j+3]=='0'){
                        after++;
                    }
                }
                count += (after-before);
            }
            if(count > 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
            after = 0;
            before = 0;
            n--;
        }
        t--;
    }
}