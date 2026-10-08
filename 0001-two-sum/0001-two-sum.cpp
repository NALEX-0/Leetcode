class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;

        for (unsigned int i = 0; i < nums.size(); i++) {
            int dif = target - nums[i];
            if (m.contains(dif)) {
                result.push_back(m[dif]);
                result.push_back(i);
                return result;
            }
            m[nums[i]] = i;
        }
        return result;
    }
};