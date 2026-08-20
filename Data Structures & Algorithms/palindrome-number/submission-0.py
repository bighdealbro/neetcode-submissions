class Solution:
    def isPalindrome(self, x: int) -> bool:
        temp=x
        num=0
        while(temp):
            dig=int(temp%10)
            num=num*10+dig
            temp=int(temp/10)   
        return num==x     
        