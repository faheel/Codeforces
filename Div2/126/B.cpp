/*	
    Problem link:
    http://codeforces.com/problemset/problem/200/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int drinks;
    cin >> drinks;

    int volume_sum, volume_percent;
    volume_sum = 0;
    for (int i = 0; i < drinks; i++) {
        cin >> volume_percent;
        volume_sum += volume_percent;
    }

    cout << volume_sum / double(drinks) << "\n";
    
    return 0;
}
