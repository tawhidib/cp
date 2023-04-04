list = [1,2,3,4,5]

# loop through the list 

# way 1 

""" for x in list:
  print(x) """

# way 2

"""
for i in range(len(list)):
  print(list[i]) 
"""

# way 3

"""

i = 0
while i < len(list):
    print(list[i])
    i += 1 
    
"""

# way 4
# short hand 

""" 

[print(x) for x in list]

 """

###
### List Comprehension ... ... ...
###

fruits = ['apple', 'aam','banana', 'cherry', 'kiwi', 'mango']
# newList = []
""" 

for x in fruits:
    if 'a' in x:
        newList.append(x)

print(newList)

 """

# print(['hello' for x in fruits])

# newList = [x if x != "banana" else "orange" for x in fruits]
# print(newList)



###
### Sort List ... ... ...
###

nums = [23,65,12,32,45,31,90,100,76]
nums.sort()
fruits.sort()
print(fruits)
print(nums)