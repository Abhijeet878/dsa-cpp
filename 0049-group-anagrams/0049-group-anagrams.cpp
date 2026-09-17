class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int n = strs.size() ; 

        unordered_map<string , vector<string>>mp ; 
        
        vector<vector<string>>ans  ;

    for(string ch : strs){

        string result = ch ;

        sort(result.begin(),result.end()) ; 
        mp[result].push_back(ch) ; 
    }

        
        for(auto x : mp ){
            ans.push_back(x.second) ; 
        }

        return ans ; 
    }
};