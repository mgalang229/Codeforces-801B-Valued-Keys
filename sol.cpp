#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string x;
	cin >> x;
	string y;
	cin >> y;
	int n = y.size();
	string res = "";
	// compare and collect the smaller i-th characters between strings 'x' and 'y'
	for (int i = 0; i < n; i++) {
		if ((x[i] - 'a') < (y[i] - 'a')) {
			res += string(1, x[i]);
		} else {
			res += string(1, y[i]);
		}
	}
	// if the resulting string is equal to string 'y', then it is valid string 'z'
	// otherwise, it is impossible to produce such a string
	cout << (res == y ? res : "-1") << '\n';
	return 0;
}
