class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {

        int  n  = arr.size() ;

vector<pair<float,pair<int,int>>>ans ;

for(int  i =0 ;i<n ;i++){
    for(int j =0 ;j<n ;j++){
        float result = (float)arr[i]/arr[j] ;

     ans.push_back({result, {arr[i], arr[j]}});

    }
}
sort(ans.begin(),ans.end()) ;

return {ans[k-1].second.first,ans[k-1].second.second} ;
  
    }
};