#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

double distance(pair<int, int> p1, pair<int, int> p2) {
    double val = sqrt((p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second));
    return val;
}

bool is_right_triangle(pair<int, int> p1, pair<int, int> p2, pair<int, int> p3) {
    vector<double> sides = {distance(p1, p2), distance(p2, p3), distance(p3, p1)};
    sort(sides.begin(), sides.end());
    return fabs(sides[0]*sides[0] + sides[1]*sides[1] - sides[2]*sides[2]) < 1e-9;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<pair<int, int>> points;

        for (int j = 0; j < n; j++) {
            int x, y;
            cin >> x >> y;
            points.push_back({x, y});
        }

        int count = 0;

        for (int j = 0; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                for (int l = k + 1; l < n; l++) {
                    if (is_right_triangle(points[j], points[k], points[l])) {
                        count++;
                    }
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
//d code