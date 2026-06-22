class Solution {
    public boolean hasDuplicate(int[] nums) {
        int n = nums.length;
    //    HashSet<Integer>st = new HashSet<>();
    //    for(int num : nums) {
    //     st.add(num);// add all elements into the hasset 
    //    }
    //    return st.size() != n;
    // if any duplicate is found then set size < nums size 
    HashMap<Integer,Integer>mp = new HashMap<>();
    // for(int num : nums) {
    //     if(mp.containsKey(num)){
    //         return  true;// as the number is already exist in the map
    //     }
    //     else {
    //         mp.put(num,1);// add the dummy value along with num
    //     }
    // }
    // return false; // as if no duplicate exist in the map 
    for(int num : nums) {
        mp.put(num,mp.getOrDefault(num,0)+1);
        // add the num alogn with its occurance in the map 
        }
        // now loop again and check if any num freq > 1 if yes duplicate 
     int c = 0;
    for(int num : nums) {
        if(mp.get(num) > 1) {
          return true;
        }
    } 
    return false; 
    
    }
}
