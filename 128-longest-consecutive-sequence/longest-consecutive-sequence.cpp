class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int longest = 1;
        int cnt = 1;
        if (n==0){
            return 0;
        }
        int lasts= INT_MIN;
        for (int i=0;i<n;i++){
            if (arr[i]-1==lasts){
                cnt ++;
                lasts=arr[i];
            }
            else if (arr[i]!=lasts){
                cnt =1;
                lasts=arr[i];
            }

            longest=max(longest,cnt);
        }
        return longest ;

        
    }
};