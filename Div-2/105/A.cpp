/*	
    Problem link:
    http://codeforces.com/problemset/problem/148/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    array<int, 4> nums;
    for (int& num : nums)
        cin >> num;
    
    int num_dragons;
    cin >> num_dragons;

    vector<bool> harmed(num_dragons, false);
    for (size_t i = 0; i < nums.size(); i++) {
        for (int multiple = nums[i]; multiple <= num_dragons; multiple += nums[i])
            harmed[multiple - 1] = true;
    }

    int dragons_harmed = 0;
    for (const bool& isHarmed : harmed)
        if (isHarmed)
            dragons_harmed++;
    
    cout << dragons_harmed << "\n";

    return 0;
}
