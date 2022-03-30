// Sample Input 1 
// 5
// 3
// 0 0 4
// 3 0 1
// 0 1 0
// 2
// 0 5
// 3 2
// 2
// 1 3
// 5 0
// 3
// 0 3 4
// 4 0 5
// 6 5 0
// 4
// 3 0 2 4
// 0 2 3 5
// 3 4 3 0
// 3 4 0 3
// Sample Output 1 
// YES
// NO
// NO
// YES
// YES

#include <bits/stdc++.h>
using namespace std;
  
void solve() {
	int N;
	cin >> N;
	int a[N][N], b[N][N];
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			cin >> a[i][j];
			b[j][i] = a[i][j];
		}
	}
	bool ok = true;
	for(int i = 0; i < N; i++) {
		ok &= *min_element(a[i], a[i] + N) == 0 && 
		      *min_element(b[i], b[i] + N) == 0;
	}
	cout << (ok ? "YES" : "NO") << endl;
}
 
int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}