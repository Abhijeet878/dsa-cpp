class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        int n = nums.size() ;

        vector<int>ans = nums ;

    int left =0 ;
    int right = n-1 ;


        sort(ans.begin(),ans.end()) ;

        while(left< n && nums[left]==ans[left]){
                left ++ ;
        }

        while(right>=0 && nums[right]==ans[right]){

            right -- ;
        }

if(left>right)
return 0 ;

 int result = right - left + 1;

return result ;
       
   
    }
};