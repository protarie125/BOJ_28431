#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto ans = int{ 0 };
	auto isn = vb(10, false);
	for (auto i = 0; i < 5; ++i) {
		int x;
		cin >> x;

		if (!isn[x]) {
			ans += x;
			isn[x] = true;
		}
		else {
			ans -= x;
			isn[x] = false;
		}
	}

	cout << ans;

	return 0;
}