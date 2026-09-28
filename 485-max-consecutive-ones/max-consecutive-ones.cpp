class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0;
        int max1 = 0;

        for (int x : nums) {
            if (x == 1) {
                c++;
                max1 = max(max1, c);
            } else {
                c = 0;
            }
        }

        return max1;
    }
};