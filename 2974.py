class Solution:
    def numberGame(self, nums):
        
        
        length = len(nums)
                        
        if length % 2 == 0:
            arr = []
            length = length / 2
            length = int(length)
            for i in range(0,length):
                alice = min(nums)
                nums.remove(min(nums))
                bob = min(nums)
                nums.remove(min(nums))
            
                arr.append(bob)
                arr.append(alice)
            
            return arr
            

        else:
            return
