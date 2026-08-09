class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

    int i;
    int n;
    n=strs.size();
    map<string, vector<string>> mp;

    for(i=0;i<n;i++)
    {
        string a = strs[i];
        sort(a.begin(), a.end());
        mp[a].push_back(strs[i]);
    }

    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); it++) {
            ans.push_back(it->second);
        }
    return ans;
        
        
    }
};
