// Input
// The first line of input contains the number of strings n
// the next n lines each contains a string of length 100 max and consists of only lower case alphabets.
// 1 <= n <= 500

// 7
// cse
// mnc
// cse
// ele
// cse
// zzza
// physics
// Output

// cse 3
// ele 1
// mnc 1
// physics 1
// zzza 1
// Explanation
// The output contains strings sorted lexicographically and the number in front of them indicates the number of times they occured in the input.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    string x;
    map< string, int > m;
    while (n--)
    {
        cin >> x;
        m[x]++;
    }
    map <string , int >::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}