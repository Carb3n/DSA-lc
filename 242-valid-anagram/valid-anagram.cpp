class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
    unordered_map<char,int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        for(char ch:t){
            if(freq.find(ch)==freq.end() || freq[ch]==0){
                return false;
            }
            freq[ch]=freq[ch]-1;
        }
         return true;
    }
}; //freq.find(ch)==freq.end() means if ch exist in 't' string 
//we are first mapping s string then removing frequency after finding it in t string if count reaches 0 that means its an anagram
// /freq[ch] == 0 means:
//There are no more occurrences of this character left to match.