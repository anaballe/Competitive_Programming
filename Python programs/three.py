def bit(n):
  mi = 999
  ma = 0
  while(n!=0):
    rem = n % 10
    if(mi > rem):
      mi = rem
    if(ma < rem):
      ma = rem
    n = n // 10
  ans = ma*11 + mi*7
  return ans
size = input()
size = int(size)
inp = input()
k = inp.split(' ')
b = []
for i in k:
  b.append(int(i))
for i in range(0,len(b)):
  b[i] = bit(b[i])
i=0
pairs=1
while(i<size):
  j=i+2
  while(j<size):
    p = str(b[i])
    bb = int(p[1])
    p = str(b[j])
    cc = int(p[1])  
    if(bb == cc):
      pairs = pairs + 1
      break
    j = j + 2
  i = i +1
print(pairs)