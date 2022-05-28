class Solution
{
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix)
  {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> ans;
    int i = 0, j = 1, left = 0, right = n, up = 0, down = m;
    while (left < right && up < down)
    {
      for (j = left; j < right; j++)
      {
        ans.push_back(matrix[up][j]);
      }
      up++;
      for (i = up; i < down; i++)
      {
        ans.push_back(matrix[i][right - 1]);
      }
      right--;
      if (left >= right || up >= down)
        break;
      for (j = right - 1; j >= left; j--)
      {
        ans.push_back(matrix[down - 1][j]);
      }
      down--;
      for (i = down - 1; i >= up; i--)
      {
        ans.push_back(matrix[i][left]);
      }
      left++;
    }
    return ans;
  }
};