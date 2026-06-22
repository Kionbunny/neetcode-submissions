class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLen = 0;
        //Iterate through all possible starting points of substring
        for(int i=0;i<n;i++){
          unordered_set<int>st;
          for(int j=i;j<n;j++){
            if(st.count(s[j])){break;}
          st.insert(s[j]);
          maxLen = max(maxLen,j-i+1);
        }
        }
        return maxLen;
        
    }
};
