class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
         int bb=prices[0];
         int mp=0;
         for(int i=1;i<n;i++){
            if (prices[i]>bb){
                mp=max(mp,prices[i]-bb);

            }
            bb=min(prices[i],bb);

         }
         return mp;

        
    }
};