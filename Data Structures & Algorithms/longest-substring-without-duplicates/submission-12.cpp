class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxLen = 0;
        unordered_set<int>st;
        for(int right = 0;right < s.size();right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);// add the right pointer data into set 
            maxLen = max(maxLen,right-left+1);
        }
        return maxLen;
    }
};
