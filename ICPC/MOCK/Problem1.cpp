#include<iostream>
#include <queue>
using namespace std;
int main() {
    int t,n,cur;
    int **pathsA;
    queue<int> q;
    int*nodes;
    cin >> t;
    while(t>0) {
        cin >> n;
        pathsA = new int*[n-1];
        nodes = new int[n] {0};
        for(int i=0;i<n;i++) {
            pathsA[i] = new int[2];
            cin >> pathsA[i][0] >> pathsA[i][1];
        }
        cur = pathsA[0][1];
        q.push()
        for(int j=0;j<n;j++) {
            if(pathsA[j][0]==cur) {
                q.push(pathsA[j][0]);
            }
            else if(pathsA[j][1]==cur) {
                q.push(pathsA[j][1]);
            }
            nodes[pathsA[i][0]]++;
            nodes[cur]++;
            cur = q.front();
        }
        t--;
    }
}