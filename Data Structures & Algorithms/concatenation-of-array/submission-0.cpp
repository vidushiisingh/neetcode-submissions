class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int i;
        int n;
        vector<int> v2;
        n=nums.size();
        v2=nums;

        for(i=0;i<n;i++)
        {
            v2.push_back(nums[i]);
        }
        return v2;

        
    }
};