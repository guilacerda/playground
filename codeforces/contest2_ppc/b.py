a = input()
b = input()

c = [int(d) for d in str(a)]
e = [int(f) for f in str(b)]

g = ''

for x in range(0, len(c)):
    if c[x] == e[x]:
        g = g + '0'
    else:
        g = g + '1'


print(g)
