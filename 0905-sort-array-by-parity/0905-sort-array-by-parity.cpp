class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        int n = nums.size() ;

        vector<int>ans  ;
        vector<int>result ;

        vector<int>ans2 ;

        for(int i = 0 ;i<n ;i++){

            if(nums[i]%2==0){
                    ans.push_back(nums[i]) ;
            }
            else if(nums[i]%2!=0){
                result.push_back(nums[i]) ;
            }
        }
        for(int i = 0;i<ans.size();i++){
            ans2.push_back(ans[i]) ;
        }
        for(int i =0 ;i<result.size();i++){
            ans2.push_back(result[i]) ;
        }

        return ans2 ;
    }
};