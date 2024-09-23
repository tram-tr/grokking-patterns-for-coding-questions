# 09/23/24

class Solution:
  def reverseVowels(self, s: str) -> str:
    # TODO: Write your code here
    
    # two pointers
    vowels = 'aeiouAEIOU'
    left = 0
    right = len(s)-1
    arr = list(s)

    while left < right:
      while left < right and vowels.find(arr[left]) == -1:
        left += 1
      while left < right and vowels.find(arr[right]) == -1:
        right -= 1
      
      arr[left], arr[right] = arr[right], arr[left]

      left += 1
      right -=1

    return ''.join(arr)
