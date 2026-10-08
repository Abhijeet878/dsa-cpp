class Solution {
public:
    int scoreOfParentheses(string s) {

      stack<int> st;
        st.push(0);

        for(char c : s) {
            if(c == '(') {
                st.push(0);
            }
            else {
                int count = st.top();
                st.pop();

                // int score = (count == 0) ? 1 : 2 * count;
int score  ;
            if(count==0){
                score = 1 ;
            }
            else {
                score = 2*count  ; 
            }

                st.top() += score;
            }
        }

        return st.top();
    }
};