class Solution {
public:
    void wiggleSort(vector<int>& nums) {

        int n = nums.size() ; 

        

        vector<int>ans = nums ;

        sort(ans.begin(),ans.end()) ;

        int mid = (n-1)/2 ;
        int last = n-1 ;

        for(int i = 0 ;i<n ;i= i+2){

           nums[i]= ans[mid--] ;

            }

    for(int i  = 1 ;i<n ;i= i+2){
        nums[i] = ans[last--] ;
    }
        }        
    
    
};