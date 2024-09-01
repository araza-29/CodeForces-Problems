#include<iostream>
using namespace std;
int main() {
    int n, m;
    bool flag= false;
    cin >> n >> m;
    while(n>0 && m>0) {
        n--;
        m--;
        flag = !flag;
    }
    if(flag == false) {
        cout << "Malvika" << endl;
    }
    else {
        cout << "Akshat" << endl;
    }
}