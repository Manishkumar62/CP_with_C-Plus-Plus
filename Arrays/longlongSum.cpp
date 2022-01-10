// Calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

// Sample Input:
// 5
// 1000000001 1000000002 1000000003 1000000004 1000000005

// Sample Output:
// 5000000015

// EXPLANATION:
// When we add several integer values, the resulting sum might exceed the range of int datatype. You might need to use long long int in C/C++ or long data type in Java to store such sums.

#include<iostream>
using namespace std;
int main(){
    int n;cin >> n;
    int arr[n];
    long long int s=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s+=arr[i];
    }
    cout<< s << endl;
    return 0;
}