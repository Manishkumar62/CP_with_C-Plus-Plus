// Sample Input 1 
// 3
// 6
// 3 4 5 1 1 2
// 10
// 3 2 9 5 2 9 4 14 7 10
// 8
// 14 5 13 19 17 10 18 12
// Sample Output 1 
// 3 1 1 2
// 5 2 2 4 7 10 
// 4 5 10 12 18

#include<bits/stdc++.h>
typedef  long long int ll;
using namespace std;

void solve(){
    ll n;cin >> n;
    ll disc[n];
    for(ll i=0;i<n;i++){
        cin >> disc[i];
    }
    vector<ll>top;
    for(ll i=0;i<n;i++){
        ll rad = disc[i];
        auto it = upper_bound(top.begin(),top.end(),rad);
        if(it == top.end()){
            top.push_back(rad);
        }else{
            *it = rad;
        }
    }
    cout << top.size()<< " ";
    for( auto x:top){
        cout<<x<< " ";
    }
    cout << endl;
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}