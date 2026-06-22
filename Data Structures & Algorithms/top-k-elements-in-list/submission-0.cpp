class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int num : nums){
            mp[num]++;
        }
        // Max-heap 
        // priority_queue<int>pq; 
       // create min-heap 
       // priority_queue<int,vector<int>,greater<int>>pq;
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>heap;
       for(auto& entry : mp){
        heap.push({entry.second,entry.first});
        if(heap.size() > k){
            heap.pop();// pops the entire element element -> pair<int,int>
        }
       }
       vector<int>res;
       while(k){
        res.push_back(heap.top().second);
        heap.pop();
        k--;
       }
       return res;


    }
};
