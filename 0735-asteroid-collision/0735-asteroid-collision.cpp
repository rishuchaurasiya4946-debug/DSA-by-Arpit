class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> st;

        for (int curr : a) {
            while (
                !st.empty() &&
                st.back() > 0 &&
                curr < 0 &&
                st.back() < abs(curr)
            ) {
                st.pop_back();
            }

            if (
                !st.empty() &&
                st.back() > 0 &&
                curr < 0
            ) {
                if (st.back() == abs(curr)) {
                    st.pop_back();
                }
            }
            else {
                st.push_back(curr);
            }
        }

        return st;
    }
};