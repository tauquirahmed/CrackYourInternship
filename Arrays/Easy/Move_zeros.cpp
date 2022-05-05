class Solution
{
public:
  void moveZeroes(vector<int> &nums)
  {
    int iter = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] != 0)
      {
        nums[iter] = nums[i];
        iter++;
      }
    }
    for (int i = iter; i < nums.size(); i++)
    {
      nums[i] = 0;
    }
  }
};