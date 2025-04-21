#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

#define f(size) for(int i=0;i<size;i++)
#define dub(sum) cout << "Debug: " << sum << endl
#define print(str) cout << str << endl

void solve() {
    int n;
    cin >> n;
    double *x = new double[n];
    double *y = new double[n];
    for(int i=0;i<n;i++) {
        cin >> x[i] >> y[i];
    }
    double max = 0, length = 0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++){
            length = sqrt(((x[j]-x[i])*(x[j]-x[i]))+((y[j]-y[i])*(y[j]-y[i])));
            if(length > max) {
                max = length;
            }
        }
    }
    cout << fixed << setprecision(10) << max << endl;
}

int main() {
    solve();
    return 0;
}