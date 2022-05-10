class Solution
{
public:
  int minMoves(vector<int> &nums)
  {
    int n = nums.size(), sum = 0, mini = INT_MAX;
    for (auto k : nums)
    {
      sum += k;
      if (mini > k)
        mini = k;
    }
    return sum - n * mini;
  }
};