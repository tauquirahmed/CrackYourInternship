class Solution
{
public:
  int squaresum(int n)
  {
    int a = 0, rem;
    while (n > 0)
    {
      rem = n % 10;
      a += rem * rem;
      n /= 10;
    }
    return a;
  }
  bool isHappy(int n)
  {
    int low = n, high = n;
    do
    {
      low = squaresum(low);
      high = squaresum(high);
      high = squaresum(high);
    } while (low != high);
    if (high == 1)
      return true;
    else
      return false;
  }
};