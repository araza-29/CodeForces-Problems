#include<iostream>
using namespace std;

#define f(size) for(int i=0;i<size;i++)
#define dub(sum) cout << "Debug: " << sum << endl
#define print(str) cout << str << endl

void solve() {
    int n,x,y;
    cin >> n >> x >> y;
    int cost1 = n*x,cost2;
    if(n%2==0){
        cost2 = (n/2)*y;
    }
    else {
        cost2 = (n/2)*y;
        cost2 += x;
    }
    if(cost1>cost2) {
        cout << cost1 << endl;
    }
    else {
        cout << cost2 << endl;
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