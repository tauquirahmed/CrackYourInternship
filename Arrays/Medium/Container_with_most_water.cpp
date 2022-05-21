class Solution
{
public:
  int maxArea(vector<int> &height)
  {
    int n = height.size();
    int pos = 0, ans = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
      int temp = min(height[i], height[j]) * (j - i);
      ans = max(ans, temp);
      if (height[i] > height[j])
        j--;
      else
        i++;
    }
    return ans;
  }
};