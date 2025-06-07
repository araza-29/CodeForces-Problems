#include<iostream>
#include <string>
#include <cmath>
using namespace std;

#define f(size) for(int i=0;i<size;i++)
#define dub(sum) cout << "Debug: " << sum << endl
#define print(str) cout << str << endl

void solve() {
    string num;
    cin >> num;
    int i = stoi(num);
    float root = sqrt(i);
    if(root!=(int)root) {
        cout << "-1" << endl;
    }
    else {
        int n = (int)root;
        if((int)n%2==0) {
            cout << n/2 << " " <<n/2 << endl;
        }
        else {
            cout << n/2 << " " <<n/2+1 << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    while(n > 0) {
        solve();
        n--;
    }
    return 0;
}