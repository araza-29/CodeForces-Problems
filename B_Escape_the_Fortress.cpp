#include<iostream>
#include<algorithm>
using namespace std;

#define f(size) for(int i=0;i<size;i++)
#define dub(sum) cout << "Debug: " << sum << endl
#define print(str) cout << str << endl

int solve() {
    int n,count = 0;
    cin >> n;
    int *ar = new int[n];
    int * map = new int[n];
    for(int i=0;i<n;i++) {
        cin >> ar[i];
    }
    sort(ar,ar+n);
    for(int i=0;i<n;i++) {
        cout << ar[i];
    }
    for(int i=0, j=1;i<n;i++) {
        if(ar[i]==j) {
            j++;
        }
        else if(ar[i]>j){
            count+=ar[i]-j;
            j++;
        }
        else {
            continue;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    while(n > 0) {
        cout << solve() << endl;
        n--;
    }
    return 0;
}