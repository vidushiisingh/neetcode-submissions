class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,n;
        vector<int> ans;
        map<int,int> vp;
        int diff;

        n=nums.size();

        for(i=0;i<n;i++)
        {
            vp[nums[i]] = i;
        }

        for(j=0;j<n;j++)
        {
            diff=target-nums[j];
            if(vp.find(diff) != vp.end() && vp[diff] != j)
            {
                ans.push_back(j);
                ans.push_back(vp[diff]);
                return ans;
            }
        }

        

    }
};
