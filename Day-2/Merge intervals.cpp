class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<int>temp;
        temp=intervals[0];
        vector<vector<int>>ans;
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]<=temp[1])
            {
                temp[1]=max(temp[1],intervals[i][1]);
            }
            else
            {
                ans.push_back(temp);
                temp=intervals[i];
            }
        }
        ans.push_back(temp);
        return ans;
        
    }
};