class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        int n = nums.size() ;

        for(int i =1 ;i<=(n+1);i++){

            int ans = k*i ;
            bool result = false ; 

           for(int j = 0 ;j<n ;j++){

         if(ans==nums[j]){
            result = true ; 

            break ;
         }

            }
           if(!result){
            return ans   ;
           }

        }
       return  {} ;
    }
};