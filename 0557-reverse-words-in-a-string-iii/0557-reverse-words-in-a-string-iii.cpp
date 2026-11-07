class Solution {
public:
    string reverseWords(string s) {

int n = 0 ; 

for(int i = 0 ;i<=s.size() ; i++){

    if(i==s.size() || s[i]== ' '){

         int left = n ; 
         int right = i-1 ;

         while(left<right){
            swap(s[left],s[right]) ;
            left ++ ;
            right -- ;

         }
    n = i + 1 ;
    }
    
}
    
    return s ;
    }
};