https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& pro) {

        cin.tie(nullptr) -> sync_with_stdio(false);

        int profit = 0;int mini = pro[0];
        for(int i = 0;i<pro.size();i++){
            int cost = pro[i] - mini;
            profit = max(profit,cost);
            mini = min(pro[i],mini);
        }

        return profit;

    }
};
