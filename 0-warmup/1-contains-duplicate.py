# 09/22/24

class Solution:
    def containsDuplicate(self, nums):
      # TODO: Write your code here
      count = {}
      for num in nums:
        if num not in count.keys():
          count[num] = 0
        count[num] += 1

      for num in nums:
        if count[num] > 1:
          return True
          
      return False
