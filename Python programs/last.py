t = input()
t = int(t)
while(t>0):
	nk = input()
	nk1 = nk.split(' ')
	n = int(nk1[0])
	k = int(nk1[1])
	va = input()
	val = va.split(' ')
	ar=[]
	for i in val:
	  ar.append(int(i))
	ma = ar[0]
	pp = 0
	for i in range(0,n):
	  if(ma <= ar[i]):
	    ma = ar[i]
	    p = i
	if(p==n-1):
	  b=ma
	else:
	  pp = ar[p+1]
	  b = ma+pp
	  if b%2==0:
	  	b=b//2
	  else:
	  	b=b//2+1
	  tr = ma - pp
	if(tr > k):
		ma = ma - k
		pp = ma + k
		if(ma>pp):
			b = ma
		else:
			b = pp
	print(b)
	t = t -1