import sys

accounts = [[1,2,3],[3,2,1]]
richest = -sys.maxsize - 1

for x in accounts:
  current = 0
  for y in x:
    current += y
  if current > richest:
    richest = current

print(richest)

