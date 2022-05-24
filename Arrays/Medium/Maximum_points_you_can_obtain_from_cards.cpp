class Solution
{
public:
  int maxScore(vector<int> &cardPoints, int k)
  {
    int n = cardPoints.size();
    int sum = 0;
    for (auto p : cardPoints)
    {
      sum += p;
    }
    if (k == n)
      return sum;
    int ans = 0, m = n - k, temp = 0;
    for (int i = 0; i < m; i++)
    {
      temp += cardPoints[i];
    }
    ans = max(ans, sum - temp);
    for (int i = m, j = 0; i < n; i++, j++)
    {
      temp += cardPoints[i];
      temp -= cardPoints[j];
      ans = max(ans, sum - temp);
    }
    return ans;
  }
};