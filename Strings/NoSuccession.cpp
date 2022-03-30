// Sample Input:
// 5
// AAAA
// BBBBB
// ABABABAB
// BABABA
// AAABBB

// Sample Output:
// 3
// 4
// 0
// 0
// 4

// EXPLANATION:
// 1.Delete 3 A's.
// 2.Delete 4 B's.
// 3.0 deletions required.
// 4.0 deletions required.
// 5.Delete 2 A's and 2 B's.

#include<iostream>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        string s;
        cin >> s;
        int l = s.length();
        int f = 0,c = 0; 
        for(int i=0;i<l;i++){
            f=0;
            for(int j=i+1;j<l;j++)
            {
                if(s[i]==s[j])
                f++;
                else
                break;
            }
            c+=f;
            if(f!=0)
            i+=f;
        }
        cout << c << endl;
    }
    return 0;
}