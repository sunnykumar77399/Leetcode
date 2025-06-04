class Solution {
public:
    vector<vector<int>> res;
    void find(vector<int>& nums, vector<int>& v, int idx) {
        res.push_back(v);

        for (int i = idx; i < nums.size(); i++) {
            if (i > idx && nums[i] == nums[i - 1])
                continue;
            v.push_back(nums[i]);
            find(nums, v, i + 1);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> v = {};
        sort(nums.begin(), nums.end());
        find(nums, v, 0);
        return res;
    }
};