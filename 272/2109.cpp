class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i = 0;
        string ans = "";
        spaces.push_back(0x3FFFFFFF);
        for (int j = 0; j < s.size(); j++) {
            if (j == spaces[i]) {
                ans += " ";
                i++;
            }
            ans += s[j];
        }
        return ans;
    }
};
