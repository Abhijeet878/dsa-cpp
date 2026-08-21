class Solution {
public:
    int numFriendRequests(vector<int>& ages) {

        int n = ages.size() ;

        int freq[121] = {} ;

        for(int x : ages){
            freq[x]++ ;
        }

        int ans = 0  ;

        for(int i =1 ;i<=120 ;i++){
            for(int j =1 ;j<=120 ;j++){

                if(j>(i/2 +7)&& (j<=i)){

                    if(j==i){
                        ans += freq[i]*(freq[i]-1) ;
                    }
                    else{
                        ans += freq[i]*freq[j] ;
                    }
                }
            
            }
        }
        return ans  ;
    }
};