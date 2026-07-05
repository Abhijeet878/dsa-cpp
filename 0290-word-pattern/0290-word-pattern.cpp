class Solution {
public:
    bool wordPattern(string pattern, string s) {

        int n = pattern.size() ;

        vector<string>word ;

string ohh = "" ;

for(char hg : s){

    if(hg == ' '){
        word.push_back(ohh) ;
        ohh = "" ;
    }
    else 
      ohh +=hg ;
}

word.push_back(ohh) ;

if(pattern.size()!=word.size())
    return false ;
        
for(int i =0 ;i<n ; i++){
    for(int j = 0 ;j<i;j++){

        if(pattern[i]==pattern[j]&& word[i]!=word[j])
          return false ;  
    
    if(pattern[i]!=pattern[j] && word[i]==word[j])
            return false  ;
        
        
        }
    }
    return true ; 
    }
};