class Solution {
public:
    bool checkDivisibility(int n) {
        
        int sum = 0 ;
        int product = 1 ;
        int m = n ;
        int ans =0 ;

        while(n>0){
            int digit = n%10 ;

             sum += digit ;
             product *= digit ;

            n = n/10 ;
        }
        
       if(m%(sum +product)==0)
            return true ; 

        return false ;
    }
};