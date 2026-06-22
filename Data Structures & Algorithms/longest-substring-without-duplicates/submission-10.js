class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLongestSubstring(s) {
        let max_len = 0;
        const set = new Set();
        let i = 0;
        for(let  j = 0; j <s.length; j++){
            while(set.has(s[j])) {
               set.delete(s[i]);
                i++;
            }
            set.add(s[j]);
            max_len = Math.max(max_len , j-i+1);
        }
        return max_len;
    }
}
