#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define int long long

int32_t main() {
	cin.tie(0);cout.tie(0);
	int n, x; cin >> n >> x;
	vector<int> vec(n);
	for (int i = 0;i < n;++i) {
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	int ans = 0;
	for (int i = 0 ;i < n;++i) {
		ans += vec[i] * x;
		x = max(1LL, x - 1);
	}
	cout << ans << endl;
}
