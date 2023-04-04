import sys

# Write a Python program to sum all the items in a list
def sum_all(nums: list) -> int:
    sum = 0

    for x in nums:
        sum += x

    return sum

# Write a Python program to multiply all the items in a list.
def multiply_all(nums: list) -> int:
    multiply = 1

    for x in nums:
        multiply *= x

    return multiply

# Write a Python program to get the largest number from a list.
def largest(nums: list) -> int:
    largest = -sys.maxsize - 1;

    for x in nums:
        if x > largest:
            largest = x
    
    return largest

# Write a Python program to get the smallest number from a list.
def smallest(nums: list) -> int:
    smallest = sys.maxsize + 1

    for x in nums:
        if x < smallest:
            smallest = x

    return smallest

""" 
Write a Python program to count the number of strings from a given list of strings. The string length is 2 or more and the first and last characters are the same.
"""
def comp_first_last(sample_list: list) -> int:
    count: int = 0

    for x in sample_list:
        if len(x) > 1 and x[0] == x[-1]:
            count += 1

    return count

# sum = sum_all(nums_list)
# multiply = multiply_all(nums_list)
# big = largest(nums_list)
# small = smallest(nums_list)
# print(comp_first_last(sample_list))

nums_list = [12,34,21,56,78,37]
sample_list: list = ['abc', 'xyz', 'aba', '1221', 'a']

