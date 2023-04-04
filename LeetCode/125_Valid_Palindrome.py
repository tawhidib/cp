s = "0P"

lower_str = s.lower()
lower_string: str = ""

for i in lower_str:
    if ord(i) < 123 and ord(i) > 96:
        print(i)
        lower_string += i

if len(lower_string) == 0:
    print(True)

print (lower_string == lower_string[::-1])