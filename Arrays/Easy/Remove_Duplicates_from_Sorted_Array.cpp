class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int k = 0;
    vector<int>::iterator it;
    it = std::unique(nums.begin(), nums.end());
    nums.resize(std::distance(nums.begin(), it));
    return nums.size();
  }
};