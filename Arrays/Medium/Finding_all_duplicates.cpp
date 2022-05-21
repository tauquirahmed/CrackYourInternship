class Solution
{
public:
  vector<int> findDuplicates(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> v(n + 1, 0);
    for (auto k : nums)
    {
      v[k]++;
    }
    vector<int> ans;
    for (int i = 0; i <= n; i++)
    {
      if (v[i] > 1)
        ans.push_back(i);
    }
    return ans;
  }
};