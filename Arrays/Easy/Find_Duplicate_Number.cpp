class Solution
{
public:
  int findDuplicate(vector<int> &nums)
  {
    int ans;
    vector<int> v(nums.size());
    fill(v.begin(), v.end(), 0);
    for (auto k : nums)
    {
      v[k]++;
      if (v[k] > 1)
      {
        ans = k;
        break;
      }
    }
    return ans;
  }
};