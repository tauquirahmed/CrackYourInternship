class Solution
{
public:
  string convertToTitle(int columnNumber)
  {
    string ans = "";
    int n = columnNumber;
    while (n >= 1)
    {
      int i = n;
      if (i > 26)
      {
        if (i % 26 == 0)
        {
          i = 26;
        }
        else
        {
          i = i % 26;
        }
        ans.push_back(char(i + 64));
      }
      else
      {
        ans.push_back(char(i + 64));
        break;
      }
      n = (n % 26 == 0) ? (n / 26 - 1) : n / 26;
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
};