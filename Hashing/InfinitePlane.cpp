// Sample Input 1 
// 2
// 6
// 2 2 4 4 2 6 
// 2
// 16 8
// Sample Output 1 
// 4
// 2
// Explanation
// Test Case 1: Chef can divide A1 as (1,1), A2 as (1,1), A3 as (1,3), A4 as (2,2), A5 as (1,1), A6 as (2,4). Ignoring duplicates, there are 4 distinct points, which is the maximum possible.

// Test Case 2: Chef can divide A1 as (8,8), A2 as (4,4).

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >> n;
    map<int ,int>freq;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        freq[x]++;
    }
    map<int,int>::iterator it;
    int ans=0;
    for(it=freq.begin();it!=freq.end();it++){
        ans += min(it->first -1, it->second);
    }
    cout << ans << endl;
}

int main(){
    int t;cin >> t;
    while(t--) solve();
    return 0;
}