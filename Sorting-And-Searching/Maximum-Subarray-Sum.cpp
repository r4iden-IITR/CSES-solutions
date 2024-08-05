#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
int main() {
	int n;
	cin >> n;
	vector<long long> pfx(n + 1);  // prefix sum array initially filled with 0's
	for (int i = 1; i <= n; i++) {
		ll x;
		cin >> x;
		pfx[i] = pfx[i - 1] + x;  // compute the prefix sum at each element
	}
 
	ll max_subarray_sum = pfx[1];
	ll min_prefix_sum = pfx[0];
	for (int i = 1; i <= n; i++) {
		// max subarray sum is the maximum difference between two prefix sums
		max_subarray_sum = max(max_subarray_sum, pfx[i] - min_prefix_sum);
		min_prefix_sum = min(min_prefix_sum, pfx[i]);
	}
	cout << max_subarray_sum << endl;
}
