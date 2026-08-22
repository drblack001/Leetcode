class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<int, vector<char>> mp;
        for (int i = 0; i < strs.size(); i++) {
            for (int j = 0; j < strs[i].size(); j++) {
                mp[i].push_back(strs[i][j]);
            }
            sort(mp[i].begin(), mp[i].end());
        }

        vector<vector<string>> ans;
        vector<bool> visited(strs.size(), false);

        for (int i = 0; i < strs.size(); i++) {
            if (visited[i]) {
                continue;
            }
            vector<string> temp;
            temp.push_back(strs[i]);
            visited[i] = true;
            for (int j = i + 1; j < strs.size(); j++) {
                if (visited[j]) {
                    continue;
                }
                if (mp[i] == mp[j]) {
                    temp.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};