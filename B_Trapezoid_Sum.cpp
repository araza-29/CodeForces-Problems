#include<iostream>
using namespace std;
int main() {
    int n,count = 0;
    cin >> n;
    int *ar,*br;
    ar = new int[n];
    br = new int[n];
    for(int i = 0;i<n;i++) {
        cin >> ar[i];
        cin >> br[i];
    }
    for(int i=0;i<n;i++) {
       for(int j = ar[i]; j<=br[i];j++){
            count += j;
       }
    }
    cout << count << endl;
}