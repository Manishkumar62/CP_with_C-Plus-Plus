// Input:
// 4 3 2 2 3
// 2 3 4 5
// 3 4 5
// 3 2
// 3 4
// 2 3 4

// Output:
// 3

#include<iostream>
#include<map>
typedef  long long int ll;
using namespace std;

int main(){
    ll a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    ll t = a+b+c+d+e;
    map<ll,ll>m;
    for (ll i = 0; i < t; i++)
    {
        ll k;
        cin >> k;
        m[k]++;
    }
    map<ll,ll>::iterator it;
    ll ans=0;
    for(it=m.begin();it!=m.end();it++){
        if(it->second >=3){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}