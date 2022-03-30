// Sample Input 1 
// 6
// 2
// 0 0
// 0 0
// 2
// 1 0
// 0 1
// 2
// 1 0
// 1 0
// 2
// 1 0
// 1 1
// 3
// 1 0 0
// 0 1 1
// 1 1 0
// 4
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1
// Sample Output 1 
// 0
// 0
// 0
// 1
// 1
// 3
// Explanation
// Example case 1. The bandwidth of a matrix will all zero entries will be zero. This is the minimum bandwidth you can get, so there is no need of performing any swap operation.

// Example case 2. The bandwidth of a diagonal matrix will also be zero.

// Example case 3. You can make the given matrix a diagonal matrix by swapping A(2, 1) and A(2, 2), which will have zero bandwidth.

// Example case 4. You can not make swaps in any way that can reduce the bandwidth of this matrix. Bandwidth of this matrix is equal to 1, which is the minimum bandwidth that you can get.

// Example case 5. Bandwidth of the given matrix is 2. You can make it equal to be 1 by swapping A(3, 1) and A(3, 3), i.e. the matrix after the operation will look like

// 1 0 0
// 0 1 1
// 0 1 1
// The bandwidth of this matrix is 1.
// Example case 6. The swap operations won't have any effect on the matrix. Its bandwidth is equal to 3.

#include <bits/stdc++.h>
using namespace std;
void bandwidth() {
	int n;cin >> n;
	int ones = 0;
	for(int i = 0; i < n * n; i++) {
		int x;cin >> x;
		ones += x;
	}
	int answer = 0;
	ones -= n;
	for(int i = n - 1; i >= 1; i--)
		if(ones > 0) {
			ones -= 2 * i;
			answer++;
		}
	printf("%d\n", answer);
}
int main() {
	int T;cin >> T;
	while(T--) bandwidth();
}