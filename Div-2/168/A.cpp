/*	
    Problem link:
    http://codeforces.com/problemset/problem/275/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int grid[5][5] = {0};
    size_t row, col;
    int presses;

    for (row = 1; row <= 3; row++)
        for (col = 1; col <= 3; col++)
            cin >> grid[row][col];
    
    for (row = 1; row <= 3; row++) {
        for (col = 1; col <= 3; col++) {
            presses = grid[row][col]
                    + grid[row][col-1]
                    + grid[row][col+1]
                    + grid[row-1][col]
                    + grid[row+1][col];
            
            if (presses % 2 == 0)
                cout << 1;  // on
            else
                cout << 0;  // off
        }
        cout << '\n';
    }

    return 0;
}