class Solution {
    public:
        vector<int> closestPrimes(int left, int right) {
            if(left==right)return{-1,-1};
            vector<bool>isprime(right+1,true);
            isprime[0]=false;
            isprime[1]=false;
            for(int i=2;i*i<=right;i++){
                if(isprime[i]){
                    for (int j = i * i; j <= right; j += i) {
                    isprime[j] = false;
                }
                }
            }
            vector<int>ans;
            for(int i=left;i<=right;i++){
                if(isprime[i] && i>=left && i<=right)
                    ans.push_back(i);
            }
    if (ans.size() < 2) {
            return {-1, -1};
        }
            int diff = INT_MAX;
            vector<int>res = {-1,-1};
            for(int i=0;i<ans.size()-1;i++){
                if(ans[i+1]-ans[i]<diff){
                    diff = ans[i+1]-ans[i];
                    res.clear();
                    res.push_back(ans[i]);
                    res.push_back(ans[i+1]);
                }
            }
            return res;
        }
    };