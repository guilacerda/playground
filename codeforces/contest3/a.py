a = input()
a = list(a)
count = 0

for i in range(0, len(a)):
    if a[i] == "Q" or a[i] == "H" or a[i] == "9":
        count = count + 1
        break

if count > 0:
    print("YES")
else:
    print("NO")
