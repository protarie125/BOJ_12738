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

int n;
vl aj;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;
	aj = vl(n);
	auto vecl = vl{};
	vecl.reserve(n);
	for (auto i = 0; i < n; ++i) {
		cin >> aj[i];
		if (vecl.empty()) {
			vecl.push_back(aj[i]);
		}
		else {
			if (vecl.back() < aj[i]) {
				vecl.push_back(aj[i]);
			}
			else {
				auto p = lower_bound(vecl.begin(), vecl.end(), aj[i]);
				*p = aj[i];
			}
		}
	}

	cout << vecl.size();

	return 0;
}