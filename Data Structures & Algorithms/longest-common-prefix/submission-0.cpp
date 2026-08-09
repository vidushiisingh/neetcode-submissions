class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        // 1. Sort the vector alphabetically
        std::sort(strs.begin(), strs.end());
        
        // 2. Grab only the first and last words
        std::string first = strs.front(); // or strs[0]
        std::string last = strs.back();   // or strs[strs.size() - 1]
        
        int i = 0;
        // 3. Compare them character by character
        while (i < first.length() && i < last.length() && first[i] == last[i]) {
            i++; // Keep moving right as long as they match
        }
        
        // 4. Cut and return the matching part
        return first.substr(0, i);
        
    }
};