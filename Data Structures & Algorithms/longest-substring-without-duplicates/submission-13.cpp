class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int maxLen = 0;
        unordered_map<char,int>mp;
        for(int j=0; j<s.size(); j++){
            if(mp.find(s[j]) != mp.end()){
               i = max(i,mp[s[j]]+1);// track the last recent duplicate index and place left pointer beside it 
            }
            mp[s[j]] = j;
            maxLen = max(maxLen,j-i+1);
        }
        return maxLen;
    }
};
