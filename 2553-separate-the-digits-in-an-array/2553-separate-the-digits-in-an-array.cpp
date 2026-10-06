class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        int n = nums.size() ; 

        vector<int>ans ; 

      for(int no : nums){
        vector<int>temp ; 

        while(no>0){
            temp.push_back(no%10) ;
            no = no/10 ;

        }
        reverse(temp.begin(),temp.end()) ; 

        for(int t : temp){
            ans.push_back(t) ;
        }
      }
        return ans ; 
    }
};