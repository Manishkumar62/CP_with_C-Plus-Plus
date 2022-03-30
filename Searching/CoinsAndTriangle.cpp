// Chef belongs to a very rich family which owns many gold mines. Today, he brought N gold coins and decided to form a triangle using these coins. Isn't it strange?

// Chef has a unusual way of forming a triangle using gold coins, which is described as follows:

// He puts 1 coin in the 1st row.
// then puts 2 coins in the 2nd row.
// then puts 3 coins in the 3rd row.
// and so on as shown in the given figure.

// Input
// 3
// 3
// 5
// 7

// Output
// 2
// 2
// 3
// Explanation
// Test 1: Chef can't form a triangle with height > 2 as it requires atleast 6 gold coins.
// Test 2: Chef can't form a triangle with height > 2 as it requires atleast 6 gold coins.
// Test 3: Chef can't form a triangle with height > 3 as it requires atleast 10 gold coins.
#include<iostream>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int h = 1;
        while( ((h*(h+1))/2) <= n ){
            h++;
        }
        cout << h - 1 << endl;
    }
    return 0;
}