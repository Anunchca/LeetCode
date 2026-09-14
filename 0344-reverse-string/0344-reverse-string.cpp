class Solution {
public:
    void reverseString(vector<char>& s) {
        auto left{0};
        auto right{ssize(s) - 1};

        char temp;
        while (left < right) {
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }
};