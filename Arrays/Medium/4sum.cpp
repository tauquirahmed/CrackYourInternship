class Solution
{
public:
  vector<vector<int>> fourSum(vector<int> &nums, int target)
  {
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        int low = j + 1, high = n - 1, sum = target - nums[i] - nums[j];
        while (low < high)
        {
          if (nums[low] + nums[high] == sum)
          {
            vector<int> v;
            v.push_back(nums[i]);
            v.push_back(nums[j]);
            v.push_back(nums[low]);
            v.push_back(nums[high]);
            ans.push_back(v);

            while (low < high && nums[low] == nums[low + 1])
              low++;
            while (low < high && nums[high] == nums[high - 1])
              high--;
            low++;
            high--;
          }
          else if (nums[low] + nums[high] < sum)
            low++;
          else
            high--;
        }
        while (j + 1 < n && nums[j] == nums[j + 1])
          j++;
      }
      while (i + 1 < n && nums[i] == nums[i + 1])
        i++;
    }
    return ans;
  }
};