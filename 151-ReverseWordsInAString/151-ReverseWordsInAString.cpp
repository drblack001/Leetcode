// Last updated: 7/29/2026, 2:27:42 PM
class Solution {
public:
    string reverseWords(string s) {
    stringstream ss(s);
    vector<string> words;
    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    string result = "";
    for (int i = words.size() - 1; i >= 0; i--) {
        result += words[i];

        if (i != 0)  
            result += " ";
    }
    return result;
    }
};