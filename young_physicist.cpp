#include <iostream>

using namespace std;
#define int long long

int32_t main() {
	cin.tie(0);ios::sync_with_stdio(false);
	int n;cin >> n;
	int a, b, c;cin >> a >> b >> c;
	int s1 = a, s2 = b, s3 = c;
	--n;
	while (n--) {
		cin >> a >> b >> c;
		s1 += a;
		s2 += b;
		s3 += c;
	}
	if (s1 == 0 && s2 == s3 && s1 == s2) {
		cout << "YES\n" << endl;
	} else {
		cout << "NO\n" << endl;
	}
}
