class Solution:
    def insertionSort(self, pairs: List[Pair]) -> List[List[Pair]]:
        res = []
        if not pairs:
            return res
        for j in range(len(pairs)):
            current_pair = pairs[j]
            key_val = pairs[j].key
            i = j - 1
            while i >= 0 and pairs[i].key > key_val:
                pairs[i + 1] = pairs[i]
                i -= 1
            pairs[i + 1] = current_pair
            res.append(pairs[:])
        return res