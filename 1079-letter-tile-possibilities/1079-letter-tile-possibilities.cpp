
class Solution {
public:
    int backtrack(string& tiles, vector<int>& used) {

        int count = 0;

        for (int i = 0; i < tiles.size(); i++) {

            if (used[i]) {
                continue;
            }

            if (i > 0 && tiles[i] == tiles[i - 1] && !used[i - 1]) {
                continue;
            }
            used[i] = 1;
            count++;

            count += backtrack(tiles, used);

            used[i] = 0;
        }

        return count;
    }

    int numTilePossibilities(string tiles) {

        sort(tiles.begin(), tiles.end());

        vector<int> used(tiles.size(), 0);

        return backtrack(tiles, used);
    }
};
