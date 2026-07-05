class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

       int duplicate = -1 ;
       int missing = -1 ;

       int n = nums.size() ;

       sort(nums.begin(),nums.end()) ;

       if(nums[0]!=1)
       missing  = 1 ;

       for(int i = 1 ;i<n ;i++){

       if(nums[i-1]==nums[i])
       duplicate = nums[i-1] ;

       if(nums[i]>nums[i-1] +1 )
       missing = nums[i-1]+1 ;


       }
       if(nums[n-1]!=n)
       missing = n ;

        return   {duplicate,missing} ;
    }
};