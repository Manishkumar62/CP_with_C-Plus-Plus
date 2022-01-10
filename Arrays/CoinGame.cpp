// There are n piles of coins, where the ith pile has ai coins. You need to collect the maximum number of coins from these piles, but you must fulfill the following condition:

// Let's say you pick xi coins from the ith pile, then:

// x1+x3+x5… = x2+x4+x6
// 0≤xi≤ai
// For example, if n=3 and, a=[2,3,2], you can pick the coins as x= [1,2,1] becuase x1+x3=1+1=2 and x2=2 Find the maximum total number of coins you can pick.

// Sample Input:
// 4
// 5 1 1 4
// Sample Output:
// 10
// Explanation:
// Let x=[4,1,1,4] hence x1+x3=x2+x4 and total number of coins picked is 10. It can be checked that it is not possible to pick any greater number of coins.

#include<iostream>
using namespace std;

int main(){
    int n, even_sum=0, odd_sum=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if((i+1)%2 == 0){
            even_sum+=arr[i];
        } else {
            odd_sum+=arr[i];
        }
    }
    int ans = (even_sum < odd_sum)?even_sum : odd_sum;
    cout << 2 * ans << endl;
    return 0;
}