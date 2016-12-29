/*	
	Problem link:
    http://codeforces.com/problemset/problem/266/B
*/

#include <bits/stdc++.h>

using namespace std;

void girlsToFront(string& arrangement) {
    for (size_t pos = 0; pos < arrangement.size() - 1; pos++)
        if (arrangement[pos] == 'B' and arrangement[pos+1] == 'G') {
            swap(arrangement[pos], arrangement[pos+1]);
            pos++;
        }
}

int main() {
    ios_base::sync_with_stdio(false);

    int numChildren, numSeconds;
    cin >> numChildren >> numSeconds;

    string arrangement;
    cin >> arrangement;

    while (numSeconds--)
        girlsToFront(arrangement);

    cout << arrangement << "\n";

    return 0;
}