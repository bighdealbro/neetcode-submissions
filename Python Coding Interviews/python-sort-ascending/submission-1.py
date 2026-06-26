from typing import List


def sort_words(words: List[str]) -> List[str]:
    if len(words) <= 1:
        return words
    pivot = words[len(words) // 2]
    left = [x for x in words if x < pivot]
    middle = [x for x in words if x == pivot]
    right = [x for x in words if x > pivot]
    return sort_words(left) + middle + sort_words(right)


def sort_numbers(numbers: List[int]) -> List[int]:
    if len(numbers) <= 1:
        return numbers
    pivot = numbers[len(numbers) // 2]
    left = [x for x in numbers if x < pivot]
    middle = [x for x in numbers if x == pivot]
    right = [x for x in numbers if x > pivot]
    return sort_numbers(left) + middle + sort_numbers(right)

def sort_decimals(numbers: List[float]) -> List[float]:
    if len(numbers) <= 1:
        return numbers
    pivot = numbers[len(numbers) // 2]
    left = [x for x in numbers if x < pivot]
    middle = [x for x in numbers if x == pivot]
    right = [x for x in numbers if x > pivot]
    return sort_numbers(left) + middle + sort_numbers(right)



# do not modify below this line
print(sort_words(["cherry", "apple", "blueberry", "banana", "watermelon", "zucchini", "kiwi", "pear"]))

print(sort_numbers([1, 5, 3, 2, 4, 11, 19, 9, 2, 5, 6, 7, 4, 2, 6]))

print(sort_decimals([3.14, 2.82, 6.433, 7.9, 21.555, 21.554]))
