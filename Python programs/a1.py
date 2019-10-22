n = int(input())
st = input()
k = st.split(' ')
t = []
for i in k:
	t.append(int(i))
ma = 0
freq = 0
for i in t:
	freq=0
	for j in t:
		if(i==j):
			freq = freq + 1
	if(freq >= ma):
		ma = freq
print(ma)