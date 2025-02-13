#include<bits/stdc++.h>
using namespace std;
int minOperations(vector<int>& nums, int k) {
    set<int>s;
    int c = 0;
    for(int i:nums)
        s.insert(i);

    while(s.size() > 2 && *s.begin()<k){
    int x = *s.begin();
    s.erase(x);
    int y = *s.begin();
    s.erase(y);
    int ans = min(x, y) * 2 + max(x, y);
    s.insert(ans);
    c++;
    }
    return c;
}
int main(){
    vector<int>nums = {2,11,10,1,3};
    int k = 10;
    cout<<minOperations(nums,k);
}