class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        int i;
        int n;
        n=nums.size();
        bool ans;
        ans=false;

        set<int> st;

        for(i=0;i<n;i++)
        {
            if(st.find(nums[i])==st.end())
            {
                st.insert(nums[i]);
            }

            else{
                ans=true;
            }
            
        }

        return ans;
    }
};