#include<iostream>
using namespace std;
int main() {
    int t,a,b;
    cin >> t;
    while(t>0) {
        cin >> a >> b;
        if(a==0){
            if(b%2==0)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
        else if(b == 0) {
            if(a%2==0)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
        else {
            b = b*2;
            if((a+b)%2==0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        t--;
    }
}