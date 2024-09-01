#include<iostream>
using namespace std;

void Convert(int num, int* binaryNum) {
    for(int i = 0; num > 0 && i < 32; i++) {
        binaryNum[i] = num % 2;
        num /= 2;
    }
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int **bin = new int*[m];
    int *num = new int[m];
    
    for(int i = 0; i < m; i++) {
        cin >> num[i];
        bin[i] = new int[32];
        Convert(num[i], bin[i]);
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<32;j++) {
            cout << bin[i][j] << endl;
        }
    }
    int tempk;
    int friends = 0;
    for(int i = 0; i < m - 2; i++) {  // Stop at m-2 to avoid out-of-bounds
        tempk = k;
        for(int j = 0; j < 32 && tempk >= 0; j++) {  // Ensure tempk is valid
            if(bin[m-1][j] != bin[i][j]) {
                tempk--;
            }
        }
        if(tempk >= 0) {
            friends++;
        }
    }
    cout << friends << endl;
    return 0;
}
