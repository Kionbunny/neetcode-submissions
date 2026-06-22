class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int max_len = 0;
        int n = s.size();
        int i=0;// left pointer
        for(int j=0;j<n;j++){
            char ch = s[j];
            if(mp.find(ch)!=mp.end()){
                i = max(mp[ch]+1,i);// as mp[ch] > i so move i one place ahead
            }
            // if the ch is new the add to map along with its latest idx 
            mp[ch] = j;
            max_len = max(max_len,j-i+1);
        }
        return max_len;
    }
};
