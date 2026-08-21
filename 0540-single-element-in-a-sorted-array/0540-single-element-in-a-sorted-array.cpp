class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size() ;
int m ; 

unordered_map<int,int> freq ;
       
       for(int  x : nums){
        freq[x]++ ;
       }

       for(auto it : freq){

        if(it.second == 1){
           m = it.first ;
        }

       }

return m  ;

    }
};