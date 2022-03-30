#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    int t;cin >> t;
    stack<int>s;
    while(t--){
        int n;cin >> n;
        if(n == 1){
            int m;cin >> m;
            s.push(m);
        }
        if(n == -1){
            if(s.empty()){
                cout << "kuchbhi" << endl;
            }
            else{
                cout << s.top() << endl;
                s.pop();
            }
        }
    }
    return 0;
}