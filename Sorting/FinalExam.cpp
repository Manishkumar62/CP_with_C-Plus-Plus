// Sample Inputs
// 3
// 5 2
// 3 1
// 4 2

// 3
// 6 1
// 5 2
// 4 3
// Sample Outputs
// 2

// 6
// Note
// In the first sample Muna first takes an exam in the second subject on the first day (the instructor writes down the schedule date that is 3). On the next day she takes an exam in the third subject (the instructor writes down the schedule date, 4), then she takes an exam in the first subject (the instructor writes down the mark with date 5). Thus, Muna takes the last exam on the second day and the dates will go in the non-decreasing order: 3, 4, 5.
// In the second sample Muna first takes an exam in the third subject on the fourth day. Then she takes an exam in the second subject on the fifth day. After that on the sixth day Muna takes an exam in the first subject.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;cin >> n;
    vector<pair<int,int>> v(n);
    for(auto &i: v){
        cin >> i.first >> i.second;
    }
    sort(v.begin(), v.end());
    int curr = 1;
    for(int i=0;i<n;i++){
        if( curr <= v[i].second ){
            curr = v[i].second;
        }else{
            curr = v[i].first;
        }
    }
    cout << curr << endl;
    return 0;
}