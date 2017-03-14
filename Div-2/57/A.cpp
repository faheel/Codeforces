/*	
	Problem link:
	http://codeforces.com/problemset/problem/61/A
*/

#include <bits/stdc++.h>

using namespace std;

string string_xor(const string& num1, const string& num2) {
	string result;

	for (size_t i = 0; i < num1.length(); i++)
		result += (num1[i] != num2[i] ? "1" : "0");

	return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	
	string num1, num2;
	cin >> num1 >> num2;

	cout << string_xor(num1, num2) << "\n";
	
	return 0;
}
