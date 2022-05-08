class Solution
{
public:
  bool isValid(string s)
  {
    bool ans = false;
    if (s.size() % 2 != 0)
      return false;
    stack<char> x;
    for (auto k : s)
    {
      if (k == '(' || k == '[' || k == '{')
        x.push(k);
      else
      {
        if (x.empty() == true)
        {
          ans = false;
          break;
        }
        else if (k == ')' && x.top() == '(' && x.empty() != true)
        {
          x.pop();
          ans = true;
        }
        else if (k == ']' && x.top() == '[' && x.empty() != true)
        {
          x.pop();
          ans = true;
        }
        else if (k == '}' && x.top() == '{' && x.empty() != true)
        {
          x.pop();
          ans = true;
        }
        else
        {
          ans = false;
          break;
        }
      }
    }
    if (x.empty())
      return ans;
    else
      return false;
  }
};