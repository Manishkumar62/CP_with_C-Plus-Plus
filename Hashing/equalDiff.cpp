// You are given an array of N integers. Find the minimum number of integers you need to delete from the array such that the absolute difference between each pair of integers in the remaining array will become equal.

// Sample Input 1 
// 3
// 2
// 1 2
// 5
// 2 5 1 2 2
// 4
// 1 2 1 2
// Sample Output 1 
// 0
// 2
// 2
// Explanation
// Test case 1: There is only one pair of integers and the absolute difference between them is |A1−A2|=|1−2|=1. So there is no need to delete any integer from the given array.

// Test case 2: If the integers 1 and 5 are deleted, the array A becomes [2,2,2] and the absolute difference between each pair of integers is 0. There is no possible way to delete less than two integers to satisfy the given condition.

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    map<int, int>m;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        m[x]++;
    }
    int ans=n,cnt=0;
    for(auto element:m){
        ans = min(ans, n-element.second);
        cnt++;
    }
    if(cnt>=2){
        ans = min(ans, n-2);
    }
    cout<<ans<<endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);// to run code faster
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}