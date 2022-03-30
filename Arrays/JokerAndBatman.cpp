// Sample Input 1 
// 3
// 2 2 2
// 1 2
// 1 1
// 2 1
// 2 2 4
// 1 1
// 1 2
// 1 2 2 1
// 3 2 3
// 2 1 3
// 1 2
// 1 3 1
// Sample Output 1 
// 2
// 3
// 1
// Explanation
// Test Case 1: Since the strip is composed of colors from different lists, the answer is the length of the strip, which is 2.

// Test Case 2: The first and second index have colors from different lists, and the third and fourth index have colors from different lists. So the strip is seen to be composed of 3 consecutive segments.

// Test Case 3: Since the strip is composed of colors from the same list, the answer is 1 segment.

#include<iostream>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n,m,l;
        cin>>n>>m>>l;
        int arr[n+1];
        for(int i=1;i<=m;i++){
            int k;cin >> k;
            for(int j=1;j<=k;j++){
                int x;cin >> x;
                arr[x] = i;
            }
        }
        int prev = 0, ans = 0;
        for(int i=1;i<=l;i++){
            int s;cin >>s;
            if(arr[s] != prev){
                ans++;
            }
            prev = arr[s];
        }
        cout<<ans<<endl;
    }
    return 0;
}