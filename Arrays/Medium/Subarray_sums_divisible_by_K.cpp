class Solution
{
public:
  int subarraysDivByK(vector<int> &nums, int k)
  {
    vector<int> v(k, 0);
    int sum = 0;
    for (int i : nums)
    {
      sum += (i % k + k) % k;
      v[sum % k]++;
    }
    int ans = v[0];
    for (int i : v)
    {
      ans += (i * (i - 1)) / 2;
    }
    return ans;
  }
};