// Sample Input 1 
// 1
// 4
// 1 2 9 13
// 5 6 10 14
// 3 7 11 15
// 4 8 12 16
// Sample Output 1 
// 2
// Explanation
// Example case 1: After the first operation, with L=2, the resulting matrix is

// 1 5 9 13
// 2 6 10 14
// 3 7 11 15
// 4 8 12 16
// After the second operation, with L=4, the matrix becomes sorted

// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<vector<int>> v;
        for(int i = 0;i<n;i++){
            vector<int> temp ;
            for(int j = 0;j<n;j++){
                int a ;
                cin >> a ;
                temp.push_back(a);

            }
            v.push_back(temp);
        }
        vector<bool>m(n,0);
        for (int i = 0; i < n; i++)
        {
            if ( v[0][i] == i+1) m[i] = 1; 
        }
        int count = 0;
        for(int i=n-1;i>=1;i--){
            if( m[i] ) continue;
            else{
                count++;
                for (int j = i; j >= 1; j--)
                {
                    m[j] = (m[j])? false:true;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
