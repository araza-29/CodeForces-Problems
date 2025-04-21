#include<iostream>
using namespace std;

#define f(size) for(int i=0;i<size;i++)
#define dub(sum) cout << "Debug: " << sum << endl
#define print(str) cout << str << endl

void solve() {
    int n,m;
    cin >> n >> m;
    int **ar = new int*[n];
    int* ans = new int[n];
    for(int i=0;i<n;i++) {
        ar[i] = new int[m];
        for(int j=0;j<m;j++) {
            cin >> ar[i][j];
            int max = ar[i][j];
            while(j>0 && max<ar[i][j-1]) {
                ar[i][j] = ar[i][j-1];
                j--;
            }
            ar[i][j] = max; 
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(ar[j][i])
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