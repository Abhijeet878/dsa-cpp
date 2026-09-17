class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int first = 0;
        int last = matrix.size() - 1;

        int left = 0;
        int right = matrix[0].size() - 1;

        vector<int> ans;

        while (first <= last && left <= right) {

            // 1. Left → Right
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[first][i]);
            }
            first++;

            // 2. Top → Bottom
            for (int i = first; i <= last; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // 3. Right → Left
            if (first <= last) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[last][i]);
                }
                last--;
            }

            // 4. Bottom → Top
            if (left <= right) {
                for (int i = last; i >= first; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};