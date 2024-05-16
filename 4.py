class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        merged = nums1 + nums2
        mnum = sorted(merged)

        length = len(mnum)

        if length % 2 == 1:

            length = length / 2
            length = int(length)
            return mnum[length]

        else:
            mid_index = length // 2
           
            pos1 = mid_index
            pos2 = mid_index - 1
           
            sum_of_middle = mnum[pos1] + mnum[pos2]
           
            return sum_of_middle / 2.0
