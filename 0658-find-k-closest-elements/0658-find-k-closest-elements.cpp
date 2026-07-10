class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

    int n = arr.size() ;

    vector<pair<int,int>> ans  ;

    for(int i =0 ;i<n ;i++){
        ans.push_back({abs(arr[i]-x),arr[i]}) ;
    }

    sort(ans.begin(),ans.end()) ;

    vector<int>result ;

    for(int i =0 ;i<k ;i++){
        result.push_back(ans[i].second) ;
    }
    sort(result.begin(),result.end()) ;

    return result ;
    }
};