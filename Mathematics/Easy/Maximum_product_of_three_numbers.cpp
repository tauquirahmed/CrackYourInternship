class Solution
{
public:
  int maximumProduct(vector<int> &nums)
  {
    sort(nums.begin(), nums.end(), greater<int>());
    int a, b, c, n = nums.size() - 1;
    a = nums[0] * nums[1] * nums[2];
    b = nums[n] * nums[n - 1] * nums[0];
    c = max(a, b);
    return c;
  }
};