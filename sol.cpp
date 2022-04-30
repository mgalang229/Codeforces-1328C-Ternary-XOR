#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		string a = "1";
		string b = "1";
		bool encountered = false;
		for (int i = 1; i < n; i++) {
			if (i == 1 || !encountered || s[i] == '0') {
				if (s[i] == '2') {
					a += "1";
					b += "1";
				} else if (s[i] == '1') {
					a += "1";
					b += "0";
					encountered = true;
				} else {
					a += "0";
					b += "0";
				}
			} else {
				if (s[i] == '2') {
					a += "0";
					b += "2";
				} else if (s[i] == '1') {
					a += "0";
					b += "1";
				}
			}
		}
		cout << a << '\n' << b << '\n';
	}
	return 0;
}
