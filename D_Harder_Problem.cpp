#include<iostream>
using namespace std;

#define f(size) for(int i=0;i<size;i++)
#define dub(sum) cout << "Debug: " << sum << endl
#define print(str) cout << str << endl

void solve() {
    int num, *ar, *br;
    cin >> num;
    ar = new int[num];
    br = new int[num];
    for(int i=0;i<num;i++){
        cin >> ar[i];
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