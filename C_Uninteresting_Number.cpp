#include<iostream>
using namespace std;

#define f(size) for(int i=0;i<size;i++)
#define dub(sum) cout << "Debug: " << sum << endl
#define print(str) cout << str << endl

int solve() {
    int num;
    cin >> num;
    if(num%9==0) {
        print("YES");
        return 0;
    }
    int temp = num;
    while(temp/10>0) {

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