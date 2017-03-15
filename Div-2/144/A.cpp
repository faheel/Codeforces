/*	
    Problem link:
    http://codeforces.com/problemset/problem/233/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    
    int perm_size;
    cin >> perm_size;

    if (perm_size % 2 == 0)
        for (int num = perm_size; num > 0; num--)
            cout << num << " ";
    else
        cout << -1;
    cout << "\n";
    
    return 0;
}
