info = {
    "name": "Md Towhidul Islam",
    "age": 27,
}

info_keys = info.keys()

for x in info_keys:
    print(info[x])

for x in (info.items()):
    [key, value] = x
    print(key, value)