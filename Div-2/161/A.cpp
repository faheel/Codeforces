/*	
	Problem link:
	http://codeforces.com/problemset/problem/263/A
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	
	/*
		(y)	4 . . . . .
			3 . . . . .
			2 . . x . .
			1 . . . . .
			0 . . . . .
		  	  0 1 2 3 4
					 (x)
	*/
	
	int x, y, oneX, oneY, num;
	for (y = 4; y >= 0; y--)
	{
		for (x = 0; x < 5; x++)
		{
			cin >> num;
			if (num == 1)
			{
				oneX = x;
				oneY = y;
			}	
		}
	}
	
	cout << (abs(2 - oneX) + abs(2 - oneY)) << "\n";
	
	return 0;
}
