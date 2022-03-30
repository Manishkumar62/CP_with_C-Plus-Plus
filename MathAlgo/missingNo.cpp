// Alice (uniformly and independently) randomly picks two integers a,b from the range [1,104], and writes down the values of a+b, a−b, a⋅b and ⌊a/b⌋ (integer division) in some random order. Unfortunately, she forgot the values of a and b. You need to help her to find out if there exists two integers a,b such that 1≤a,b≤1e4 and a+b, a−b, a⋅b, ⌊a/b⌋ are the numbers she has written down.

// If a solution exists, it is guaranteed to be unique.

// Sample Input 1 
// 2
// -1 72 0 17
// 1 4 5 6
// Sample Output 1 
// 8 9
// -1 -1
// Explanation
// Test case 1: With a=8,b=9 we obtain 8+9=17,8−9=−1,8⋅9=72,⌊8/9⌋=0 which are exactly the 4 numbers written down by Alice.

// Test case 2: It can be shown that no choice of integers a,b can produce the given 4 numbers.

#include<iostream>
using namespace std;
#define ll long long

void solve(ll x,ll y,ll z,ll d,ll &a,ll &b){
    if((x+y)%2 == 0){
        ll t1 = (x+y)/2;
        ll t2 = abs(x-y)/2;
        if(t1<=0 || t1>10000 || t2<=0 || t2>10000){
            a = -1;
            b = -1;
            return;
        }else if((t1*t2)==z&&(t1/t2)==d || (t1*t2)==d&&(t1/t2)==z){
            a=t1;
            b=t2;
        }else{
            a=-1;
            b=-1;
        }
    }else{
        a=-1;
        b=-1;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll x,y,z,d,a,b;
        cin >> x >> y >> z >> d;
        solve(x,y,z,d,a,b);

        if(a==-1 && b==-1){
            solve(x,z,y,d,a,b);
        }
        if(a==-1 && b==-1){
            solve(x,d,y,z,a,b);
        }
        if(a==-1 && b==-1){
            solve(y,z,x,d,a,b);
        }
        if(a==-1 && b==-1){
            solve(y,d,x,z,a,b);
        }
        if(a==-1 && b==-1){
            solve(z,d,x,y,a,b);
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}