a = input()
a = a.split(" ")
a = [int(a[0]), int(a[1])]

mapW = {}

for x in range(0, int(a[1])):
    b = input()
    b = b.split(" ")
    mapW[b[0]] = b[1]

b = input()
b = b.split(" ")
c = []

for x in b:
    if x in mapW.keys():
        if len(x) < len(mapW[x]):
            c.append(x)
        elif len(x) > len(mapW[x]):
            c.append(mapW[x])
        else:
            c.append(x)
    else:
        key = list(mapW.keys())[list(mapW.values()).index(x)]

        if len(x) < len(key):
            c.append(x)
        elif len(x) > len(key):
            c.append(key)
        else:
            c.append(x)

st = ""
for x in range(0, len(c)):
    if x+1 == len(c):
        st = st + c[x]
        break

    st = st + c[x] + " "

print(st)
