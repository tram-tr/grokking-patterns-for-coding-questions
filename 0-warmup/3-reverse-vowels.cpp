// 09/23/24

#include <iostream>
#include <string>

class Solution {
  public:
  
    std::string reverseVowels(std::string s) {
      // TODO: Write your code here
      // two pointers

      std::string vowels = "aeiouAEIOU";
      std::string arr = s;

      int start = 0;
      for (int end = s.length()-1; end >= 0; end--) {
          if (start < end && vowels.find(arr[end]) != -1) {
            while (start < end && vowels.find(arr[start]) == -1)
              start++;
            
            std::swap(arr[start++], arr[end]);
          }
      }
      return arr;
    }
};
