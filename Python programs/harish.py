print("Enter the number of elements")
p = input()
n = int(p)
print("Enter the numbers")
arr = []
for i in range(0,n):
    t = input()
    p = int(t)
    arr.append(p)
pos = 0
neg = 0
zer = 0
for i in arr:
    if i > 0:
        pos = pos + 1
    elif i < 0:
        neg = neg + 1
    else:
        zer = zer + 1
pos = pos / n
neg = neg / n
zer = zer / n
print("{:.6f}".format(pos),"{:.6f}".format(neg),"{:.6f}".format(zer))
