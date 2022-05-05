class Solution
{
public:
  void sortColors(vector<int> &nums)
  {
    vector<int> v(3);
    fill(v.begin(), v.end(), 0);
    for (auto k : nums)
    {
      v[k]++;
    }
    int iter = 0;
    for (int i = 0; i < 3; i++)
    {
      while (v[i]--)
      {
        nums[iter] = i;
        iter++;
      }
    }
    for (auto k : nums)
    {
      cout << k << " ";
    }
  }
};