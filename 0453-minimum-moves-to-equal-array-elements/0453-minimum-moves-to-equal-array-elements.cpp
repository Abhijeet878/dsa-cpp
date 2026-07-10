class Solution {
public:
    int minMoves(vector<int>& nums) {
        
      //   int n = *min_element(nums.begin(), nums.end());

         sort(nums.begin(),nums.end()) ;

         int n = nums[0] ;

        int result = 0;

        for (int num : nums) {
            result += (num - n);
        }

        return result;
    }
};