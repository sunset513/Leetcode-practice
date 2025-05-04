#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int numEquivDominoPairs(vector<vector<int>> &dominoes)
  {
    map<pair<int, int>, int> d_map;

    for (auto &d : dominoes)
    {
      // always swap smaller element to d[0]
      if (d[0] > d[1])
        swap(d[0], d[1]);
      pair<int, int> curr = make_pair(d[0], d[1]);
      d_map[curr]++;
    }

    int ans = 0;

    for (auto m : d_map)
    {
      int freq = m.second;
      // C(n, 2)
      ans += freq * (freq - 1) / 2;
    }

    return ans;
  }
};