class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int l = 0;
        int h = n - 1;
        int first = -1;
        int last = -1;

        // Find first occurrence
        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] < target) {
                l = mid + 1;
            }
            else if (nums[mid] > target) {
                h = mid - 1;
            }
            else {
                first = mid;
                h = mid - 1;   // search left
            }
        }

        // Find last occurrence
        l = 0;
        h = n - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] < target) {
                l = mid + 1;
            }
            else if (nums[mid] > target) {
                h = mid - 1;
            }
            else {
                last = mid;
                l = mid + 1;   // search right
            }
        }

        return {first, last};
    }
};