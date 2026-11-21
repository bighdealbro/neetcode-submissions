class Solution:
    def isPalindrome(self, s: str) -> bool:
        k=0
        s1=""
        for i in s:
            if (i.isalnum()):
                s1+=i.lower()
        j=len(s1)-1
        while(k<=j):
            if(s1[k]!=s1[j]):
                return False
            k+=1
            j-=1
        return True


        