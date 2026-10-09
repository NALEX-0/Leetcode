class Solution {
public:
    bool isPalindrome(int x) {
        string n = to_string(x);
        for (int i = 0; i < n.size(); i++) {
            if (n[i] != n[n.size() - i - 1]) {
                return false;
            }
        }
        return true;
    }
};