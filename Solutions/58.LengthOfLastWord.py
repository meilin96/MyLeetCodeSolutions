class Solution(object)
    : def lengthOfLastWord(self, s)
    : ""
      "
      : type s : str : rtype : int ""
                                   "
                               if not len(s)
    : return 0 l = s.split() if len(l) > 0 : return len(l[-1]) else : return 0
