number = int(input("Enter the number: "))

if number < 33:
  print("fail...")
else:
  if number >= 80:
    print("A+")

  elif number >= 70:
    print("A")

  elif number >= 60:
    print("A-")

  elif number >= 50:
    print("B")

  elif number >= 40:
    print("C")

  else:
    print("D")