class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, bool> vis;
        int left = 0;
        int result = 0;

        for (int right = 0; right < s.size(); right++) {
            while (vis[s[right]]) {
                vis[s[left]] = false;
                left++;
            }
            
            vis[s[right]] = true;
            result = max(result, right - left + 1);   
        }
        return result;
    }
};