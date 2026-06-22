class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
       int index = 0;
       vector<int>v(n);
        k = k % n; // k > n
       for(int i=n-k;i<n;i++){
        v[index++] = nums[i];
       } 
       // index = 4 ;
       for(int i=0; i < n-k; i++){
         v[index++] = nums[i];
       }
       for(int i=0;i<v.size();i++){nums[i] = v[i];}
       for(int num : nums) {cout<<num<<" ";}
    }
};