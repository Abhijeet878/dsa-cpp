class Solution {
public:
    int minAddToMakeValid(string s) {

        int n = s.size() ; 
    
      int count = 0;
      int result = 0 ;

    for(char ch : s){
        if(ch=='('){
            count ++ ; 
        }
        else {
            if(count>0){
                count -- ;
            }
            else
        result ++ ;
        }
    }
        return count + result ; 
    }
};