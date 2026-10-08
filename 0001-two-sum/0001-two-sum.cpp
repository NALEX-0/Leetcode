class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        m.reserve(nums.size());
        vector<int> result;

        for (unsigned int i = 0; i < nums.size(); i++) {
            int dif = target - nums[i];
            auto j = m.find(dif);
            if (j != m.end()) {
                result.push_back(j->second);
                result.push_back(i);
                return result;
            }
            m[nums[i]] = i;
        }
        return result;
    }
};