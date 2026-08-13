// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        int i = 1 ;
        int j = n ;

        while(i<j){
            int medium = i + (j-i)/2 ;

            if(isBadVersion(medium)){
               j = medium   ;
            }
            else{
                i = medium + 1 ;
            }
           
        }

    return i ; 
    }
};