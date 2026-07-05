class Solution {
public:
    string convertToTitle(int columnNumber) {

        string result  ;

        while(columnNumber>0){
            columnNumber -- ;

            char ans =  'A' + (columnNumber%26) ;

            columnNumber/=26 ;

            result += ans  ; 
        }
        reverse(result.begin(),result.end()) ;
        return result  ;
    }
};