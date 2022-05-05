class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int profit = 0, mini = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
      if (prices[i] < mini)
        mini = prices[i];
      else
      {
        if (prices[i] - mini > profit)
        {
          profit = prices[i] - mini;
        }
      }
    }
    return profit;
  }
};