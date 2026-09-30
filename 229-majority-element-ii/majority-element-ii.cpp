class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int maj1 = 0, maj2 = 0;
        int cnt1 = 0, cnt2 = 0;

        // Phase 1: Find potential candidates
        for (int i = 0; i < n; i++) {

            if (nums[i] == maj1) {
                cnt1++;
            }
            else if (nums[i] == maj2) {
                cnt2++;
            }
            else if (cnt1 == 0) {
                maj1 = nums[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0) {
                maj2 = nums[i];
                cnt2 = 1;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        // Phase 2: Verify candidates
        cnt1 = 0;
        cnt2 = 0;

        for (int x : nums) {
            if (x == maj1)
                cnt1++;
            else if (x == maj2)
                cnt2++;
        }

        vector<int> result;

        if (cnt1 > n / 3)
            result.push_back(maj1);

        if (cnt2 > n / 3)
            result.push_back(maj2);

        return result;
    }
};