class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int i;
        int n;
        n=nums.size();

        int count;
        count=n/2;

        //int majority_element=0;

        unordered_map<int,int> mp;

        for(int num : nums)
        {
            mp[num]++;
        }

        for(i=0;i<n;i++)
        {
            if(mp[nums[i]]>count)
            {
                return nums[i];
            }
        }

       return 0;
        
    }
};