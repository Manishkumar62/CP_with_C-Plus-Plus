// Input:
// 3
// a?c
// ??b
// ???a
// ???a
// ?abac
// aba?w

// Output:
// 1 3
// 0 3
// 3 5
// Explanation
// Example case 1. You can change the question marks in the strings so that you obtain S1 = abc and S2 = abb. Then S1 and S2 will differ in one position. On the other hand, you can change the letters so that S1 = abc and S2 = bab. Then, the strings will differ in all three positions.

// Example case 2. Change the question marks this way: S1 = dcba, S2 = dcba, then the strings will differ in 0 positions. You can also change the question marks so that S1 = aaaa, S2 = dcba, then the strings will differ in 3 positions.

// Example case 3. Change the question marks this way: S1 = aabac, S2 = abaaw, then the strings will differ in 3 positions. Then, change the question marks this way: S1 = xabac, S2 = abayw, then they will differ in 5 positions.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--){
        string s1, s2;
        cin >> s1 >> s2;
        int m = s1.length();
        int max = 0, min = 0;
        for (int i = 0; i < m; i++)
        {
            if(s2[i]=='?' && s1[i]=='?'){
                max++;
            }
            else if((s1[i]!='?' && s2[i]=='?')|| (s1[i]=='?' && s2[i]!='?')){
                max++;
            }
            else{
                if (s1[i] != s2[i]){
                    min++;
                }
            }
        }
        cout << min << " " << max + min << endl;
    }
    return 0;
}