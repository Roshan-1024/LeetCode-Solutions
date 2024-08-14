class Solution(object):
    def truncateSentence(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        l = s.split()
        ans = ""
        for word in l[:k]:
            ans += word + " "
        return ans[:len(ans)-1]
        