class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k = k % n;
        vector<int>v(n);
        for(int i=0; i < n-k; i++){
           v[k+i] = nums[i];
        }
         
         for(int i=n-k; i < n; i++){
            v[i-(n-k)] = nums[i];
         }
         // copy v -> nums again 
         for(int i=0;i<v.size();i++){
            nums[i] = v[i];
         }
        
    }
};