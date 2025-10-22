class Solution(object):
    def createTargetArray(self, nums, index):
        """
        :type nums: List[int]
        :type index: List[int]
        :rtype: List[int]
        """
        r=[]
        for i in range(len(nums)):
            r.insert(index[i],nums[i])
        return r
        