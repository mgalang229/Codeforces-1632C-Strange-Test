#include <bits/stdc++.h>
using namespace std;

bool match_set_bits(int a, int val) {
	bool start = false;
	for (int bit = 0; bit < 32; bit++)
		if (a & (1 << bit) && !(val & (1 << bit)))
			return false;
	return true;
}

void test_case(int& tc) {
	int a, b;
	cin >> a >> b;
	int x = 0;
	for (int bit = 0; bit < 32; bit++)
		if (a & (1 << bit) || b & (1 << bit))
			x += (1 << bit);
	int mn = b - a;
	for (int val = b; val <= x; val++) {
		if (match_set_bits(a, val)) {
			mn = min(mn, val - b + 1);
			break;
		}
	}
	for (int val = a; val <= b; val++) {
		if (match_set_bits(val, b)) {
			mn = min(mn, val - a + 1);
			break;
		}
	}
	cout << mn << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
		test_case(tc);
}
