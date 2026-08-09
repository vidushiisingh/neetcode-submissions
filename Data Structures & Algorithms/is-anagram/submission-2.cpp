class Solution {
public:
    bool isAnagram(string s, string t) {
        int i,j,k;
        int n1,n2;

        bool ans;
        ans=true;

        n1=s.length();
        n2=t.length();

        if(n1!=n2)
        {
            ans=false;
        }

        vector<int> arr(26);



        for(i=0;i<n1;i++)
        {
            arr[s[i]-'a']++;
        }

        for(j=0;j<n2;j++)
        {
            arr[t[j]-'a']--;
        }

        for(k=0;k<26;k++)
        {
            if(arr[k]!=0)
            {
                ans=false;
            }
        }
        
        return ans;
        
    }
};
