class Solution(object):
    def addBinary(self, a, b):

        decimal1 = int(a, 2)
        decimal2 = int(b, 2)
        
        sum = decimal1 + decimal2
        binary_sum = bin(sum)[2:]  # Remove the '0b' prefix
        
        return binary_sum
