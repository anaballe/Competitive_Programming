N = input()
dhh = input()
m = input()
dbb = input()
N = int(N)
m = int(m)
dh = dhh.split(' ')
db = dbb.split(' ')
dh1 = []
db1 = []
fill =[]
for i in dh:
	dh1.append(int(i))
	fill.append(0)
for i in db:
	db1.append(int(i))
for i in db1:
	j=len(dh1)-1
	k=0
	while(j>=0):
		if(i <= dh1[j] and fill[j] < (j+1)):
			fill[j] = fill[j] + 1
			k = j+1
			break
		j = j - 1
	print(k,end=' ')