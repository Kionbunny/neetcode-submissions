class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int res = 0;
     unordered_set<int>store(nums.begin(),nums.end());
     for(int num : nums){// reset streat when coming out of while loop 
        int streak = 0, curr = num;
        // loop until the seq breaks 
        while(store.find(num) != store.end()){
            streak++;
            num++;
        }
        res = max(res,streak);
     }   
     return res; 
    }
};
