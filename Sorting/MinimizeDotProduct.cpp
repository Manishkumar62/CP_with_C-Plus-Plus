// Abhishek is very good in mathematics. Now he came to know about dot product of vectors. So He asked his friend Suyash a problem. He gave him two vectors A and B of length N . He asked him to minimize the dot product of these two vectors. Suyash has a choice to change the order of the elements of these two vectors i.e. for any two elements i and j in any vector he can interchange the position of these elements.

// Since Suyash is new to programming, He asked you to solve this problem for him. 

// Input:
// 2
// 3
// 1 3 -5
// -2 4 1
// 5
// 1 2 3 4 5
// 1 0 1 0 1

// Output:
// -25
// 6

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long int

int main(){
    int t;cin >> t;
    while(t--){
        ll n;cin >> n;
        vector<ll>a(n);
        vector<ll>b(n);
        for(ll i=0;i<n;i++) cin >> a[i];
        for(ll i=0;i<n;i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<ll>());
        ll dotProduct = 0;
        for(ll i=0;i<n;i++){
            dotProduct += (a[i] * b[i]);
        }
        cout << dotProduct << endl;
    }
    return 0;
}