class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        // Sort the array of strings
        sort(strs.begin(), strs.end());
        
        // Compare only the first and last strings
        string first = strs[0];
        string last = strs.back();
        string result = "";
        
        for (int i = 0; i < min(first.length(), last.length()); i++) {
            if (first[i] != last[i]) {
                break;
            }
            result += first[i];
        }
        
        return result;
    }
};