class Solution
{
public:
  int subarraySum(vector<int> &nums, int k)
  {
    int n = nums.size(), sum = 0;
    unordered_map<int, int> m;
    int ans = 0;
    m[0] = 1;
    for (int i = 0; i < n; i++)
    {
      sum += nums[i];
      if (m.find(sum - k) != m.end())
        ans += m[sum - k];
      m[sum]++;
    }

    return ans;
  }
};