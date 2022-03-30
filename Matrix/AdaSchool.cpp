// Ada's classroom contains N⋅M tables distributed in a grid with N rows and M columns. Each table is occupied by exactly one student.

// Before starting the class, the teacher decided to shuffle the students a bit. After the shuffling, each table should be occupied by exactly one student again. In addition, each student should occupy a table that is adjacent to that student's original table, i.e. immediately to the left, right, top or bottom of that table.

// Is it possible for the students to shuffle while satisfying all conditions of the teacher?

// Sample Input 1 
// 2
// 3 3
// 4 4
// Sample Output 1 
// NO
// YES

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;cin >> n >> m;
    bool n_odd = n % 2;
    bool m_odd = m % 2;
    if( n_odd && m_odd ){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}

int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}