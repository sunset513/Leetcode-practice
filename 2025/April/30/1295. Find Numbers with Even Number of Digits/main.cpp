#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findNumbers(vector<int> &nums)
  {
    int ans = 0;
    for (int n : nums)
    {
      if (to_string(n).length() % 2 == 0)
        ans++;
    }
    return ans;
  }
};