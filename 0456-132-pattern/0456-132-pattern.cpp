class Solution {
public:
    bool find132pattern(vector<int>& nums) {

        int n = nums.size() ;


        stack<int>result ;
int last = INT_MIN ;

for(int i = n-1 ;i>=0 ;i--){

    if(nums[i]<last)
    return true  ;

    while(!result.empty() && nums[i]>result.top()){

       last =  result.top() ;
       result.pop() ;

 }

        result.push(nums[i]) ;
}
      return false ;
    }
};