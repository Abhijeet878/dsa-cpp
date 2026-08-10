class Solution {
public:
    int findClosest(int x, int y, int z) {

   int result = abs(z-x) ;
   int ans = abs(z-y) ;

   if(result<ans)
   return 1 ;

   if(ans<result)
   return 2 ;

   return {} ;
        
    }
};