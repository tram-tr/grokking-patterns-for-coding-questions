// 09/22/24

#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

class Solution {
  public:
    bool checkIfPangram(string sentence) {
      // TODO: Write your code here
      vector<int>counter(25, 0);
      for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') continue;
        int c = tolower(sentence[i]) - 'a';
        counter[c]++;
      }

      for (auto c : counter) {
        if (c < 1) return false;
      }
      return true;
    }
};
