#include<iostream>
using namespace std;

#define f(size) for(int i=0;i<size;i++)
#define dub(sum) cout << "Debug: " << sum << endl
#define print(str) cout << str << endl

int solve() {
    int n;
    cin >> n;
    int max = 0;
    int *ar = new int[n];
    for(int i=0;i<n;i++) {
        cin >> ar[i];
        if(ar[i]>max) {
            max = ar[i];
        }
    }
    return max;
}

int main() {
    cout << solve();
    return 0;
}