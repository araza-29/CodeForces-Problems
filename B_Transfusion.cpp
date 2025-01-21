#include<iostream>
using namespace std;

#define f(size) for(int i=0;i<size;i++)
#define dub(sum) cout << "Debug: " << sum << endl
#define print(str) cout << str << endl

void solve() {
    int num;
    bool flag = true;
    cin  >> num;
    int *ar = new int[num];
    for(int i=0;i<num;i++) {
        cin >> ar[i];
    }
    for(int i=0,j=1;i<num-1 || j<=num/2;i+=2, j+=2) {
        while(i<num-2 && ar[i] < ar[i+2]) {
            ar[i]++;
            ar[i+2]--;
        }
        while(i<num-2 && ar[i] > ar[i+2]) {
            ar[i]--;
            ar[i+2]++;
        }  
        while(i-2 >= 0 && ar[i] > ar[i-2]){
            ar[i]--;
            ar[i-2]++;
        }
        while(i-2 >= 0 && ar[i] < ar[i-2]) {
            ar[i]++;
            ar[i-2]--;
        }
        while(j<num-3 && ar[j] < ar[j+2]) {
            ar[j]++;
            ar[j+2]--;
        } 
        while(j<num-3 && ar[j] > ar[j+2]) {
            ar[j]--;
            ar[j+2]++;
        } 
        while(j-2 >= 1 && ar[j] > ar[j-2]){
            ar[j]--;
            ar[j-2]++;
        }
        while(j-2 >= 0 && ar[j] < ar[j-2]) {
            ar[j]++;
            ar[j-2]--;
        }
    }
    for(int i=0;i<num-1;i++) {
        if(ar[i]!=ar[i+1]) {
            flag = false;
        }
    }
    if(flag == false) {
        print("NO");
    }
    else {
        print("YES");
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