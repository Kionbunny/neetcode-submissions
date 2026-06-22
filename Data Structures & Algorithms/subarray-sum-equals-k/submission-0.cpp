class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;// this stores number of subarrays 
        for(int i=0;i<nums.size();i++){
            int sum = 0; // reset sum for every subarray 
            for(int j=i;j<nums.size();j++){
                sum = sum += nums[j];
                if(sum == k){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};