#include<iostream>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int q;cin >> q;
        int ans=0;
        while(n>0){
            int dig = n%10;
            if(dig == q){
                ans++;
            }
            n=n/10;
        }
        cout << ans << endl;
    }
    return 0;
}