class Solution
{
public:
  bool isPalindrome(int x)
  {
    long long int n = x;
    if (n < 0)
      return false;
    long long int a = 0, r;
    while (n > 0)
    {
      r = n % 10;
      a = (a * 10) + r;
      n /= 10;
    }
    if (a == x)
      return true;
    else
      return false;
  }
};