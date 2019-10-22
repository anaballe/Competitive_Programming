n = input()
n = int(n)
st = input()
k = st.split(' ')
nu = []
freq = []
for i in k:
  nu.append(i)
  freq.append(0)
nu.sort()
mi = 1
p = 0
for i in range(0,len(nu)-1):
	if(nu[i]==nu[i+1]):
		mi = mi + 1
	else:
		if(mi > p):
			p = mi
		mi = 1
print(p)