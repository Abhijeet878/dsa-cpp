class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {

        int n = intervals.size() ;
        int m = intervals[0].size() ;

int count  = 0  ;

        for(int i = 0 ; i<n ;i++){

            bool ans = false ;

            for(int j = 0 ; j<n;j++){

                if(i==j)
                continue ; 

                if(intervals[j][0]<=intervals[i][0] && intervals[j][1]>=intervals[i][1]){
                    ans = true ;
                        break ;
                }
            }

            if(!ans)
            count ++ ;
        }
        return count  ;
    }
};