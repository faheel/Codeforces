/*  
    Problem link:
    http://codeforces.com/problemset/problem/339/A
*/

#include <bits/stdc++.h>

using namespace std;

tuple<int, int, int> get_freq(const string& str) {
    int ones = 0;
    int twos = 0;
    int threes = 0;

    for (size_t i = 0; i < str.length(); i += 2) {
        if (str[i] == '1')
            ones++;
        else if (str[i] == '2')
            twos++;
        else
            threes++;
    }

    return make_tuple(ones, twos, threes);
}

void make_ordered_sum_string(string& sum_string,
        const int& ones, const int& twos, const int& threes) {
    int i = 0;
    
    for (int o = 0; o < ones; o++, i += 2)
        sum_string[i] = '1';
    
    for (int tw = 0; tw < twos; tw++, i += 2)
        sum_string[i] = '2';
    
    for (int th = 0; th < threes; th++, i += 2)
        sum_string[i] = '3';
}

int main() {
    ios_base::sync_with_stdio(false);
    
    string sum_string;
    cin >> sum_string;

    int ones, twos, threes;
    tie(ones, twos, threes) = get_freq(sum_string);

    make_ordered_sum_string(sum_string, ones, twos, threes);

    cout << sum_string << "\n";

    return 0;
}
