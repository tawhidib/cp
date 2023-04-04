my_tuple: tuple = ("apple", "banana", "cherry", "orange", "kiwi", "melon", "mango")
# print(my_tuple)
# print(len(my_tuple))

### UPDATE tuple
x = ('apple', 'banana', 'cherry')
y = list(x)
y[1] = 'kiwi'
y.append("banana")
x = tuple(y)

p = ('friend1', 'friend2', 'friend3')
q = ('friend4',)
p += q

mul = p * 2

print(p.count("friend2"))