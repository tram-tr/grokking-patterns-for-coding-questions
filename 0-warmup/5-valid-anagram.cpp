// 09/26/24

#include <iostream>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
      // Check if the lengths of both strings are equal. 
      // If not, return false.
      if (s.length() != t.length())
        return false;
      
      std::unordered_map<char, int> freqMap;
      for (int i = 0; i < s.length(); i++) {
        freqMap[s[i]]++;
        freqMap[t[i]]--;
      }

      for (const auto& [chr, freq] : freqMap) {
        if (freq != 0) return false;
      }
      
      return true;
    }
};
