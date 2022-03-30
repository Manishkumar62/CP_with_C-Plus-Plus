// Sample Input 1 
// 2
// snehaF
// rajM
// Sample Output 1 
// Yes
// No

#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int n = s.size();
        if(s[n-1]=='F'){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
	return 0;
}