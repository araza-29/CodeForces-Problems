#include<iostream>
using namespace std;

#define f(size) for(int i=0;i<size;i++)
#define dub(sum) cout << "Debug: " << sum << endl
#define print(str) cout << str << endl

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    c-=(b-a);
    if(b==c || ((c-b)%3==0 && c>b) || (c-b) == 3) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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