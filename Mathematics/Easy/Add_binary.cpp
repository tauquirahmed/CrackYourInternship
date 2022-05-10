class Solution
{
public:
  string addBinary(string a, string b)
  {
    if (a.size() < b.size())
      return addBinary(b, a);
    int c = 0;
    for (int i = a.size() - 1, j = b.size() - 1; i >= 0; i--, j--)
    {
      if (c == 0 && j < 0)
        break;
      if (a[i] == '1')
        c++;
      if (j >= 0 && b[j] == '1')
        c++;
      a[i] = (c % 2 == 0 ? '0' : '1');
      c /= 2;
    }
    if (c)
      a = "1" + a;
    return a;
  }
};