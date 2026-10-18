
class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int> freq(26, 0);

        for (char c : letters) {
            freq[c - 'a']++;
        }

        int n = words.size();
        int ans = 0;

        for (int mask = 0; mask < (1 << n); mask++) {
            vector<int> used(26, 0);
            int totalScore = 0;
            bool valid = true;

            for (int i = 0; i < n && valid; i++) {
                if (mask & (1 << i)) {
                    for (char c : words[i]) {
                        int idx = c - 'a';
                        used[idx]++;
                        totalScore += score[idx];

                        if (used[idx] > freq[idx]) {
                            valid = false;
                            break;
                        }
                    }
                }
            }

            if (valid) {
                ans = max(ans, totalScore);
            }
        }

        return ans;
    }
};
