digits = [9]

digit_to_number = 0
for x in range(1,len(digits) + 1):
    digit_to_number += digits[x * -1] * (10 ** (x-1))

digit_to_number += 1;

result: list = []

digit_to_string = str(digit_to_number);

for i in digit_to_string: 
    result.append(int(i))

print(result)
    