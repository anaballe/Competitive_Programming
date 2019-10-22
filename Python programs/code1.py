n = input()
n = int(n)
st = input()
k = st.split(' ')
nu = []
freq = []
for i in k:
  nu.append(i)
  freq.append(0)
for i in range(0,len(nu)):
  p = 0
  for j in nu:
    if(nu[i]==j):
      p = p +1
  freq[i] = p
mi = freq[0]
for i in freq:
	if(mi < i):
		mi = i
print(mi)
