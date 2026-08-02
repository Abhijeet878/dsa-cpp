class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int n = ransomNote.size() ;

        int m = magazine.size() ;
        bool result ;

     for(int i =0 ;i<n ;i++){
     result = false ;

        for(int j =0 ; j<m ;j++){

            if(magazine[j]==ransomNote[i]){
                
                result = true ;

               magazine[j]='@' ;
                   break ;
            }
             
            
        }
        if(!result)
        return false ;
      
     }
 
   


  return true  ;
    }
};