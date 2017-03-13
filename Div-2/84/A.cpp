/*
    Problem link:
    http://codeforces.com/problemset/problem/110/A
*/

#include <bits/stdc++.h>

using namespace std;

bool is_lucky(int num) {
    if (num == 0)
        return false;
    
    int digit;
    while (num) {
        digit = num % 10;
        if (digit != 4 and digit != 7)
            return false;
        num /= 10;
    }

    return true;
}

bool is_nearly_lucky(const string& num) {
    int lucky_count = 0;

    for (const char& digit : num)
        if (digit == '4' or digit == '7')
            lucky_count++;
    
    if (is_lucky(lucky_count))
        return true;
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);

   string num;
   cin >> num;

    if (is_nearly_lucky(num))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}