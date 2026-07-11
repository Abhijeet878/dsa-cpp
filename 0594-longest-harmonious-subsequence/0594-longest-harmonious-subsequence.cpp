class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        int n  = nums.size() ;
 sort(nums.begin(),nums.end()) ;

 int left  = 0 ;
 int count = 0 ;

 for(int i =0 ;i<n ;i++){

    while(nums[i]-nums[left]>1){
        left ++ ;
    }
    if(nums[i]-nums[left]==1)
    count = max(count,i-left +1) ;
 }

 return count  ;
    }
};