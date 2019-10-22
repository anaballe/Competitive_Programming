sla = input()
pe = input()
reb = input()
tax = input()
slab = sla.split(' ')
per = pe.split(' ')
tax1 = tax.split(' ')
sl =[]
perc = []
tx = []
rebate = int(reb)
for i in slab:
	sl.append(int(i))
for i in per:
	perc.append(int(i))
for i in tax1:
	tx.append(int(i))
st = []
b = 0
for i in range(0,len(sl)-1):
	v = sl[i+1] - sl[i]
	v = (perc[i]*v)//100
	b = b + v
	st.append(b)
su = 0
for i in range(0,len(tx)):
	p=0
	k = tx[i]
	for v in range(0,len(st)):
		if(tx[i] < st[v]):
			p = p + (k*100)//perc[v]
			p = p +sl[v]
			break
		else:
			k = k - st[v]
	if(p==0):
		b = tx[i] - st[len(st)-1]
		b = (b*100) // perc[len(perc)-1]
		b = b + sl[len(sl)-1]
		p = b
	p = p + rebate
	su = su + p
print(su)

