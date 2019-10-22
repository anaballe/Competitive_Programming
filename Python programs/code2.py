t = input()
t = int(t)
while(t>0):
  n = input()
  n = int(n)
  i = 2
  p = [1]
  ss=n
  bb=[]
  while(n!=1):
    if(n % i == 0):
      p.append(i)
      n = n // i
    else:
      i = i + 1
  for j in range(0,len(p)):
    k = j + 1
    v = p[j]
    while(k<len(p)):
      v = v * p[k]
      if(ss%v==0):
        bb.append(v)
      k = k + 1
  p = p + bb
  p.append(ss)
  p.sort()
  for i in range(1,len(p)):
    if(p[i-1] != p[i]):
      print(p[i-1],end=' ')
  print(ss)
  t = t -1