class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n = nums.size() ;

        unordered_map<int,int> result ;

        result[0] = -1 ;
        int sum = 0 ;

        int ans = 0 ;

        for(int i =0 ; i<n ; i++){

            if(nums[i]==0)
            sum -- ;

            if(nums[i]==1)
            sum ++ ;

           if(result.find(sum)!=result.end())
            ans  = max(ans , i- result[sum]) ;

            else
            result[sum] = i ;
        }
        
        return ans  ;
    }
};