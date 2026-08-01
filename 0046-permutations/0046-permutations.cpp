class Solution {
public:

    void getPerms(vector<int>& nums, int idx, vector<vector<int>>& ans) {

        // Base Case
        if (idx == nums.size()) {
            ans.push_back(nums);
            return;
        }

        // Recursive Case
        for (int i = idx; i < nums.size(); i++) {

            // Choose
            swap(nums[idx], nums[i]);

            // Explore
            getPerms(nums, idx + 1, ans);

            // Backtrack
            swap(nums[idx], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;

        getPerms(nums, 0, ans);

        return ans;
    }
};