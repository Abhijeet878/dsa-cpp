class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
unordered_map<int,int> frequencys ;

vector<int>ans ;

for(int n :nums){
    frequencys[n] ++ ;

}
vector<pair<int,int>> result ;

for(auto ht : frequencys){

    result.push_back({ht.second , ht.first}) ;
}
sort(result.rbegin(),result.rend()) ;

for(int i = 0 ;i<k; i++){
    ans.push_back(result[i].second) ;
}

return ans ;
    }
};