#include<iostream>
using namespace std;
int main(){
    int t,n,m,s;
    cin >> t;
    while(t>0) {
        cin >> n >> m >> s;
        int ans = ((s-1)+m)%n;
        if(ans ==0 ){
            ans = n;
        }
        cout << ans << endl;
        t--;
    }
}