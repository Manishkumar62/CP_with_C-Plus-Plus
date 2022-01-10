// Given a sorted array arr, remove the duplicates from arr such that each element appears only once and display the new array.

// Sample Input:
// 2
// 3
// 1 1 2
// 10
// 0 0 1 1 1 2 2 3 3 4

// Sample Output:
// 1 2
// 0 1 2 3 4

// EXPLANATION:
// Given arr = [1,1,2]. Here 1 is repeated, so after deleting 1 the modified array will be [1,2].
// Given arr = [0,0,1,1,1,2,2,3,3,4]. After deleting the repeated integers, the modified array will be [0,1,2,3,4].

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>v;
        v.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i] != arr[i-1]){
                v.push_back(arr[i]);
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}