class Solution {
public:
    // Boyer Moore Algorithm 
    // Space-O(1), Time- O(n);
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int count=0;
        
        for(auto number:nums){
            if(count==0) candidate=number;
            
            if(candidate==number) count+=1;
            else count-=1;
        }
        return candidate;
    }
};