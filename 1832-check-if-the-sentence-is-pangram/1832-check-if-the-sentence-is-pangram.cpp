class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> uset;
        int counter{0};
        for (char c : sentence) {
            if (!uset.count(c)) {
                uset.insert(c);
                ++counter;
            }
        }
        return counter == 26;
    }
};