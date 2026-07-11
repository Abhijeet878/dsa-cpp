class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int> freq ;

        for(char ch : s){
            freq[ch] ++ ;
            
        }
        vector<pair<char,int>> result ;

        for(auto ans : freq){
            result.push_back(ans) ;
        }
        
        sort(result.begin(),result.end(),[](pair<char,int>i,pair<char,int>j){
            return i.second > j.second ;
        }) ;

        string ans2 ;

        for(auto ht : result){
            ans2 += string(ht.second,ht.first) ;
        }

        return ans2 ;
    }
};