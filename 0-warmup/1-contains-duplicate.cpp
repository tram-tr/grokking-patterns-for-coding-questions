// 09/22/24

#include <unordered_set>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    // TODO: Write your code here
    unordered_map<int, int> counter;
    for (auto num : nums) {
      counter[num];
      if (counter.count(num)) 
        counter[num]++;
      else counter[num] = 1;
    }

    for (auto p : counter) {
      if (p.second > 1)
        return true;
    }
    return false;
  }
};
