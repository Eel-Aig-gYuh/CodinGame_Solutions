// closest to 0
/*
	INPUT:			OUTPUT
	5				1
	1 -2 -8 4 5		
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, Min = INT16_MAX;
	int tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (Min >= abs(x)) {
			Min = abs(x);
			if (tmp == abs(x)) {
				tmp = max(tmp, x);
			}
			else
				tmp = x;
		}
	}
	cout << tmp << endl;
	return 0;
}