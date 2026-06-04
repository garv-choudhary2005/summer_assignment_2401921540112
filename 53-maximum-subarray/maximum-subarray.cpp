class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cs=0;
        int maxsum=INT_MIN;
        for(int val : nums){
            cs += val;
            maxsum=max(cs,maxsum);
            if(cs<0){
                cs=0;
            }
        }
        return maxsum;
    }
};