class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(),nums.end()) ;

        vector<int>result ;

     for(int x : nums){

        if(result.empty() || result.back()!=x){
            result.push_back(x) ;
        }
     }
     int n = result.size() ;

     if(n<3)
     return result[n-1] ;

     return result[n-3] ;
    }
};