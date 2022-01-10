// You are given a string s, of length n. You have to output all the sub-sequences of s, with length exactly equal to n, in increasing order, each in a new line.

// A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.

// For ex.: abc is a sub-sequence of abdc, while acb is not.

// Sample Input:
// 3
// hey
// Sample Output:
// hey

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;cin >> n;
    string str;
    cin>>str;
    cout<<str<<endl;
    return 0;
}