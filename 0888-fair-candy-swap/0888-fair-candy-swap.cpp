class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
    
    int alice = 0 ;
    int bob = 0 ;

    for(int a : aliceSizes){
        alice += a ;
    }
    for(int b : bobSizes){
        bob += b ;
    }

    int difference = (bob-alice)/2 ;

    unordered_set<int>result  ;

    for(int a : bobSizes){
        result.insert(a) ;
    }
 
 for(int a : aliceSizes){

    int ans  = a + difference  ;

    if(result.count(ans)){
        return {a,ans} ;
    }
 }

return {} ;
    }
};