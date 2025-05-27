#include<iostream>
using namespace std;

#define f(size) for(int i=0;i<size;i++)
#define dub(sum) cout << "Debug: " << sum << endl
#define print(str) cout << str << endl

void solve() {
    int num,n;
    cin >> num;
    int temp = num;
    int *ar = new int[num]();
    for(int i=0;i<num;i++) {
        cin >> n;
        ar[n-1]++;
        if(ar[n-1]>1){
            temp--;
        } 
    }
    print(temp);
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