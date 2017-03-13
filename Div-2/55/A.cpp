/*
    Problem link:
    http://codeforces.com/problemset/problem/59/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    string word;
    cin >> word;

    int uppercase = 0;
    int lowercase = 0;
    for (const char& c : word) {
        if (c >= 'A' and c <= 'Z')
            uppercase++;
        else if (c >= 'a' and c <= 'z')
            lowercase++;
    }

    if (uppercase > lowercase) {
        for (char& c : word)
            c = toupper(c);
    }
    else {
        for (char& c : word)
            c = tolower(c);
    }

    cout << word << "\n";

    return 0;
}