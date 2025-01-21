#include<iostream>
using namespace std;

#define f(size) for(int i=0;i<size;i++)
#define dub(sum) cout << "Debug: " << sum << endl
#define print(str) cout << str << endl

int solve() {
    int n,count = 1;
    cin >> n;
    while((n & n+1) != 0){
        count++;
        n++;
    }
    return count;
}

int main() {
    cout << solve();
    return 0;
}


