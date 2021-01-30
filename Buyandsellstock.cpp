/*121. Best Time to Buy and Sell Stock
Easy

7011

306

Add to List

Share
Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Note that you cannot sell a stock before you buy one.

Example 1:

Input: [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
             Not 7-1 = 6, as selling price needs to be larger than buying price.
Example 2:

Input: [7,6,4,3,1]
Output: 0
Explanation: In this case, no transaction is done, i.e. max profit = 0.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int k=0;
        vector<int> p;
        int n=prices.size();
        if(n==0)
            return 0;
        for(int i=0;i<n;i++)
        {
            
            p.push_back(max_r(prices,i)-prices[i]);
            
        }
        return *max_element(p.begin(),p.end());
        
        
    }
    int max_r(vector<int>& prices,int i)
    {
        int max=0;
         int n=prices.size();
        for(int j=i;j<n;j++)
        {
            if(prices[j]>max)
            {
                max=prices[j];
            }
        }
        return max;
    }
};


