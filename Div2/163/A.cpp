/*
    Problem link:
    http://codeforces.com/problemset/problem/266/A
*/

#include <bits/stdc++.h>

using namespace std;

int min_to_remove(const string& stone_arrangement, const size_t& num_stones) {
    int to_remove = 0;

    size_t prev = 0;
    size_t curr = 1;
    while (curr < num_stones) {
        if (stone_arrangement[curr] != stone_arrangement[prev]) {
            to_remove += curr - (prev + 1);
            prev = curr;
        }
        curr++;
    }
    to_remove += curr - (prev + 1);

    return to_remove;
}

int main() {
    ios_base::sync_with_stdio(false);

   size_t num_stones;
   cin >> num_stones;
   string stone_arrangement;
   cin >> stone_arrangement;

   cout << min_to_remove(stone_arrangement, num_stones) << "\n";

    return 0;
}