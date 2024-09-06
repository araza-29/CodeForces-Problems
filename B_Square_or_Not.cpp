#include<iostream>
#include <cmath>
using namespace std;
int main() {
    int t,n,count1,count2,sum1,sum2;
    string str;
    char**ar;
    bool flag = true;
    cin >> t;
    while(t>0) {
        cin >> n;
        cin >> str;
        count1 = 0;
        count2 = 0;
        int size = sqrt(n);
        flag = true;
        if(size > 1) {
            size = ceil(sqrt(n));
            sum2 = size-2;
            sum2 *= sum2;
            sum1 = (size*size)-sum2;
            for(int i=0,k=n-1;i<=k;i++,k--) {
                if(str[i] == '1' && str[k] == '1') {
                    count1+=2;
                }
                else if(i!=k && str[i] == '0' && str[k] == '0') {
                    count2+=2;
                }
                else if(i == k && str[i] == '0' && str[k] == '0'){
                    count2++;
                }
                else {
                    flag = false;
                    break;
                }
            }
            if(flag == true && count2 == sum2 && count1 == sum1) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            cout << "No" << endl;
        }
        t--;
    }
}