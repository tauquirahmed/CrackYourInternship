// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
  long long findMinDiff(vector<long long> a, long long n, long long m)
  {
    // code
    long long diff = 0;
    vector<long long> v = a;
    sort(v.begin(), v.end());
    long long start = 0, end = m - 1, ans = INT_MAX;
    while (end < n)
    {
      long long temp = v[end] - v[start];
      if (temp < ans)
        ans = temp;
      start++;
      end++;
    }
    return ans;
  }
};

// { Driver Code Starts.
int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    vector<long long> a;
    long long x;
    for (long long i = 0; i < n; i++)
    {
      cin >> x;
      a.push_back(x);
    }

    long long m;
    cin >> m;
    Solution ob;
    cout << ob.findMinDiff(a, n, m) << endl;
  }
  return 0;
} // } Driver Code Ends