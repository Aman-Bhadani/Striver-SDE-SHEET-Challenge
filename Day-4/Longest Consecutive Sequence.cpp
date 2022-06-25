class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        unordered_set<int>s;
        for(auto num:nums){
            s.insert(num);
        }
        
        for(auto num:nums)
        {
            if(!s.count(num-1)){
                int currentNum=num;
                int cnt=1;
                while(s.count(currentNum+1)){
                    cnt+=1;
                    currentNum+=1;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
        
       
        
    }
};