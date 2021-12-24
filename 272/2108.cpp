class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans;
        for (int i = 0; i < words.size(); i++) {
            string str = words[i];
            reverse(str.begin(), str.end());
            if (str == words[i]) {
                ans = str;
                break;
            }
        }
        return ans;
    }
};
