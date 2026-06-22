class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_map<int,int>mp;
      for(int num : nums){
        mp[num]++;// add the element to that map and inc the freq
      }
      for(int i=0;i<nums.size();i++){
        if(mp[nums[i]] > 1) {return true;}
      }
      return false;
    }
};
