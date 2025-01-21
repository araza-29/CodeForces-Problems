#include<iostream>
#include<map>
using namespace std;
int main() {
    int t,n,thresh;
    int *packets;
    int* firstorder;
    int* secondOrder;
    cin >> t;
    while(t>0) {
        cin >> thresh;
        cin >> n;
        firstorder = new int[n-1];
        secondOrder = new int[n-2];
        packets = new int[n];
        for(int i=0;i<n;i++) {
            cin >> packets[i];
        }
        for(int i=1;i<n;i++) {
            firstorder[i-1] = packets[i]-packets[i-1];
        }
        for(int i=1;i<n-1;i++) {
            secondOrder[i-1] = firstorder[i]-firstorder[i-1];
        }
        for(int i=0;i<n-2;i++) {
            if(secondOrder[i]>=thresh) {
                cout << "1" << " ";
            }
            else {
                cout << "0" << " ";
            }
        }
        cout << endl;
        t--;
    }
}