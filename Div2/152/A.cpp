/*  
    Problem link:
    http://codeforces.com/problemset/problem/248/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    
    int num_cupboards;
    cin >> num_cupboards;

    bool left_door, right_door;
    int left_open = 0;
    int right_open = 0;
    for (int c = 0; c < num_cupboards; c++) {
        cin >> left_door >> right_door;

        left_open += left_door;
        right_open += right_door;
    }

    int seconds = 0;    
    seconds += min(left_open, num_cupboards - left_open);
    seconds += min(right_open, num_cupboards - right_open);

    cout << seconds << "\n";
    
    return 0;
}
