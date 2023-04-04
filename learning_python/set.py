my_set = {'apple', 'banana', 'cherry'}

my_set.add('orange')

my_set.discard("kiwi")
my_set.discard("apple")


    
""" 
try:
    my_set.remove('kiwi')    
except:
    print("kiwi is not in my_list")
"""

for x in my_set:
    print(x)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}

p = x.union(y)

print(p)