from collections import defaultdict 
t = raw_input()
t = int(t)
for i in range(0,t):
	ar = []
	dic = defaultdict(list) 
	goal_diff = defaultdict(list)
	for j in range(0,12):
		b = raw_input()
		ar.append(b)
		a1,a2,a3,a4,a5 = b.split()
		#print(a1,a2,a3,a4,a5)
		dic[a1] = 0
		dic[a5] = 0
		goal_diff[a1] = 0
		goal_diff[a5] = 0
	for j in ar:
		a1,a2,a3,a4,a5 = j.split()
		#print(a1,a2,a3,a4,a5)
		goal_diff[a1] = goal_diff[a1] + int(a2) - int(a4)
		goal_diff[a5] = goal_diff[a5] + int(a4) - int(a2)
		if(int(a2) > int(a4)):
			dic[a1] = dic[a1] + 3
		if(int(a2) < int(a4)):
			dic[a5] = dic[a5] + 3
		if(int(a2) == int(a4)):
			dic[a1] = dic[a1] + 1
			dic[a5] = dic[a5] + 1
	#for j in dic:
	#	print(j+" has a score of "+str(dic[j])+" and a goal difference of "+str(goal_diff[j]))
	maxi = -100
	p1 = j
	p2 = j
	for j in dic:
		if(maxi < dic[j]):
			maxi = dic[j]
			p1 = j
		if(maxi == dic[j]):
			if(goal_diff[p1] < goal_diff[j]):
				maxi = dic[j]
				p1 = j
	maxi = -100
	for j in dic:
		if(j == p1):
			continue
		if(maxi < dic[j]):
			maxi = dic[j]
			p2 = j
		if(maxi == dic[j]):
			if(goal_diff[p2] < goal_diff[j]):
				maxi = dic[j]
				p2 = j
	print(p1+" "+p2)

