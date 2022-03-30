// Sample Input:
// 3
// 4
// 0 1 2 3
// 3
// 0 1 3
// 1
// 5
// 1
// 2
// 10
// 2 5 7 8 9 6 3 1 4 5
// 6
// 1 3 4 2 7 6

// Sample Output:
// 2
// 0
// 3

// EXPLANATION:
// Test 1: 2 segments (0,1) and (3)
// Test 2: No possible segment.

// Test 3: 3 possible segments (2) , (7) and (6,3,1,4)

#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        int m;cin >> m;
        map<int, int>mp;
        for(int i=0;i<m;i++){
            int k;cin >> k;
            mp[k]++;
        }
        int ans = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if(mp[v[i]]){
                flag = 1;
            }else{
                if(flag){
                    ans++;
                }
                flag=0;
            }
        }
        if(flag){
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}