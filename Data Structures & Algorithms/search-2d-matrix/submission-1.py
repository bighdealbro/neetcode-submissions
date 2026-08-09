class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
            rows=len(matrix)
            columns=len(matrix[0])
            top=0
            bot=rows-1
            targetRow=-1
            while(top<=bot):
                midRow=int(top+(bot-top)/2)
                if(target>=matrix[midRow][0] and target <=matrix[midRow][-1]):
                    targetRow=midRow
                    break;
                elif(target>=matrix[midRow][-1]):
                    top=midRow+1
                else:
                    bot=midRow-1
            if(targetRow==-1):
                return False
            left=0
            right=columns-1
            while(left<=right):
                mid = int(left + (right - left) / 2)
                if(matrix[targetRow][mid]==target):
                   return True
                elif(matrix[targetRow][mid]>target):
                    right=mid-1
                else:
                    left=mid+1
            return False
        
