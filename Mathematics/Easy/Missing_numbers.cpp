class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {
    int n = nums.size(), ans = 0, i = 0;
    for (int k : nums)
    {
      ans ^= (i + 1) ^ k;
      i++;
    }
    return ans;
  }
};