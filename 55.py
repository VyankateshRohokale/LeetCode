class Solution:
    def canJump(self, nums: List[int]) -> bool:
        jump = 0
        for cnt in nums:
            
            if jump < 0:
                return False
            
            elif cnt > jump:
                jump = cnt
            jump = jump - 1
            
        return True
