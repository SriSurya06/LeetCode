class Solution(object):
    def recoverOrder(self, order, friends):
        """
        :type order: List[int]
        :type friends: List[int]
        :rtype: List[int]
        """
        lst=[]
        for i in order:
            if i in friends:
                lst.append(i)
        return lst
        