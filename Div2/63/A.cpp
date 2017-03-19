/*	
    Problem link:
    http://codeforces.com/problemset/problem/69/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    
    int numForces;
    int Fx, Fy, Fz;
    int Rx, Ry, Rz; 
    
    cin >> numForces;
    
    Rx = Ry = Rz = 0;
    for (int force = 0; force < numForces; force++) {
        cin >> Fx >> Fy >> Fz;
        
        Rx += Fx;
        Ry += Fy;
        Rz += Fz;
    }
    
    if (Rx == 0 and Ry == 0 and Rz == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    
    return 0;
}
