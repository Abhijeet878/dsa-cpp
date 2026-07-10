class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        int n = nums.size() ;
     
     unordered_map<int,int> ans ; 

     for(int i =0 ; i<n ; i++){

        if(ans.find(nums[i])!=ans.end() && abs(i-ans[nums[i]]<=k))
        return true ;

        ans[nums[i]] = i ;

     }
        return false  ;
    }
};