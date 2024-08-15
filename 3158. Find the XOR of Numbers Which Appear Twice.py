class Solution(object):
    def duplicateNumbersXOR(self, nums):
        dic = {}
        ans = 0
        for n in nums:
            if n in dic:
                dic[n]+=1
            else:
                dic[n] = 1
        for num, count in dic.items():
            if count == 2:
                ans ^= num
        return ans
        