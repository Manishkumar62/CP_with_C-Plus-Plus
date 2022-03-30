// Sample Input 1 
// 2
// 4
// 1 2 3 4
// 5
// 1 42 69 228 2021 
// Sample Output 1 
// 4
// 1041808
// Explanation
// Explanation of the first test case of the sample: Given array has 3 subarrays of length at least 3.
// [1,2,3] has weight 1, with i=1,j=2,k=3: (1−2)⋅(2−3)=1
// [2,3,4] has weight 1, with i=3,j=2,k=1: (4−3)⋅(3−2)=1
// [1,2,3,4] has weight 2, with i=1,j=2,k=4: (1−2)⋅(2−4)=2, or with i=1,j=3,k=4: (1−3)⋅(3−4)=2

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long

void solve(){
	int n; cin >> n;
	vector<ll> arr(n);
	for (auto &x : arr){
		cin >> x;
	}
	int ans = 0;
	for (int i = 0; i < n; i++){
		for (int k = i + 2; k < n; k++){
			auto f = [&](int j){
				return (arr[i] - arr[j]) * (arr[j] - arr[k]); 
			};
			int j = upper_bound(arr.begin() + i, arr.begin() + k, (arr[i] + arr[k]) / 2) - arr.begin();
			j = min(j, k - 1);
			ans += max(f(j), f(j - 1));
		}
	}
	cout << ans << "\n";
}

int32_t main(){
	ll t;cin >> t;
	while (t--){
		solve();
	}
	return 0;
}