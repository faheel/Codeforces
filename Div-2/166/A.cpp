/*	
	Problem link:
    http://codeforces.com/problemset/problem/271/A
*/

#include <bits/stdc++.h>

using namespace std;

bool hasDistinctDigits(int year) {
    bool hasOccured[10] = {false};
    int digit;

    while (year) {
        digit = year % 10;
        
        if (hasOccured[digit] == false)
            hasOccured[digit] = true;
        else
            return false;
        
        year /= 10;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);

    int year;
    cin >> year;

    int nextYear = year + 1;
    while (!hasDistinctDigits(nextYear))
        nextYear++;

    cout << nextYear << "\n";

    return 0;
}