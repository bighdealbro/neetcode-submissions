class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        count=Counter(numbers)
        i=0
        j=len(numbers)-1
        while(i<j):
            curr_sum = numbers[i] + numbers[j]
            if(numbers[i]+numbers[j]==target):
                return [i+1,j+1]
            elif(curr_sum>target):
                j-=1
            else:
                i+=1
        return [-1,-1]