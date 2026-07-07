class Solution {
public:
    long long sumAndMultiply(int n) {

        int original = n ;

        long long  sum = 0 ;

        while(n>0){

        sum = n%10 + sum  ;

         n= n/10 ;

             
        }
        long long  ans  =0 ;
        int num2 =1 ;

        n = original ;

       while(n>0){

        int num = n%10 ;

        if(num!=0){
            ans = num*num2 + ans ;
            num2 *=10 ;

        }
          n /=10 ;
       }
 //int result  = ans*sum ;
        return {ans*sum} ;
    }
};