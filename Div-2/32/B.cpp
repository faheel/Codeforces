/*	
	Problem link:
    http://codeforces.com/problemset/problem/32/B
*/

#include <bits/stdc++.h>

using namespace std;

string decode(const string& code) {
    string decodedNumber = "";

    for (size_t i = 0; i < code.length(); i++) {
        if (code[i] == '.')
            decodedNumber += "0";
        else if (code[i] == '-' and i < code.length() - 1) {
            if (code[i+1] == '.')
                decodedNumber += "1";
            else if (code[i+1] == '-')
                decodedNumber += "2";
            i++;
        }
    }

    return decodedNumber;
}

int main() {
    ios_base::sync_with_stdio(false);

    string code;
    cin >> code;

    string decodedNumber = decode(code);
    cout << decodedNumber << "\n";

    return 0;
}