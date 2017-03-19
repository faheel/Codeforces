/*	
    Problem link:
    http://codeforces.com/problemset/problem/144/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    
    size_t num_soldiers;
    cin >> num_soldiers;

    vector<short> heights(num_soldiers);
    for (short& height : heights)
        cin >> height;
    
    size_t min_pos = 0;
    size_t max_pos = 0;
    short min = heights[min_pos];
    short max = heights[max_pos];
    for (size_t pos = min_pos + 1; pos < num_soldiers; pos++) {
        if (heights[pos] <= min) {	// get min height that is furthest from the start
            min = heights[pos];
            min_pos = pos;
        }
        else if (heights[pos] > max) {	// get max height that is closest from the start
            max = heights[pos];
            max_pos = pos;
        }
    }

    short seconds_required = 0;
    if (min != max) {
        seconds_required = max_pos + (num_soldiers - 1 - min_pos);
        if (max_pos > min_pos)
            seconds_required--;
    }

    cout << seconds_required << "\n";
    
    return 0;
}
