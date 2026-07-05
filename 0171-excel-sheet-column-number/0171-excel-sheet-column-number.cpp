class Solution {
public:
    int titleToNumber(string columnTitle) {

        int result = 0 ;

    for(int i =0 ; i<columnTitle.size() ;i++){

        char ans = columnTitle[i] ;

        int ans1 = ans - 'A' + 1 ;

        result = result*26 + ans1 ;
    
   
    }

    
    return result   ;
    }
};