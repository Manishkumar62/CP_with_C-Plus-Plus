// Sample Input 1 
// 2
// 4
// 9 4 10 5 
// 6
// 6 2 6 4 2 10 
// Sample Output 1 
// 18
// 8
// Explanation
// First Test Case
// 3 items the customer chose = 9 + 4 + 5 = 18

// Second Test Case
// 3 items the customer chose = 2 + 4 + 2 = 8

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        sort(v.begin(), v.end());
        int profit = 0;
        for(int i=0;i<3;i++){
            profit += v[i];
        }
        cout << profit << endl;
    }
    return 0;
}