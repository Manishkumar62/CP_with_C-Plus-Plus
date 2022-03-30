// Sample Input 1 
// 6
// 001111110
// 00110011
// 000
// 1111
// 101010101
// 101111111111
// Sample Output 1 
// YES
// NO
// NO
// YES
// NO
// NO
// Explanation
// The answer is "YES" for strings 001111110 and 1111.

// The answer is "NO" for 00110011 because the '1' digits form two disjoint segments (while they should all be consecutive, with no '0' digits between them).

// The answer is "NO" for 000 because the segment formed by the '1' digits must be non-empty (as written in the statement).

#include<bits/stdc++.h>
using namespace std;

char s[100123];

bool test_case() {
	cin >> s;
	int n = strlen(s);
	int start = n, end = -1;
	for(int i = 0; i < n; ++i)
		if(s[i] == '1') {
			start = min(start, i);
			end = max(end, i);
		}
	if(end == -1) return false;
	for(int i = start; i <= end; ++i)
		if(s[i] != '1')
			return false;
	return true;
}

int main() {
    int t;cin >> t;
	for(int i = 1; i <= t; ++i) {
		bool answer = test_case();
        string ans = (answer)? "YES":"NO";
		cout << ans << endl;
	}
}