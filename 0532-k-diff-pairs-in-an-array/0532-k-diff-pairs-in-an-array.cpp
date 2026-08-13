class Solution {
public:
    int findPairs(vector<int>& nums, int k) {

        int  n = nums.size() ;

        sort(nums.begin(),nums.end()) ;

        
int count  = 0 ;
       for(int i = 0 ;i<n ;i++){
        if(i>0 && nums[i]==nums[i-1])
          continue ;

       if( binary_search(nums.begin() + i +1,nums.end(),nums[i]+k)) 
        count ++ ;

       }
    return count ;
    }
};