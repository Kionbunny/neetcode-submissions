class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            unordered_map<char,int>mp;
            for(int j=i;j<n;j++){
                if(mp.find(s[j])!=mp.end()){
                    break;// come out of the loop 
                }
                max_len = max(max_len,j-i+1); 
                mp[s[j]] = 1;// add the ch if it is not found in map earlier
            }
        }
        return max_len;
    }
};
