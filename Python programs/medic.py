t1 = raw_input()
t = int(t1)
for i in range(0,t):
	date = raw_input()
	y,m,d = date.split(':')
	year = int(y)
	mon = int(m)
	day = int(d)
	#check for leap year
	leap = 0
	if((year%4 == 0) and (year%100 != 0)):
		leap = 1 
	if(year%400 == 0):
		leap = 1
	ar = [0,31,28,31,30,31,30,31,31,30,31,30,31]
	if(leap == 1):
		ar[2] = 29
	days = 0
	if(ar[mon]%2 == 0 and mon != 2):
		days = 62 - day
	elif(ar[mon]%2 == 1 and mon != 2):
		days = 32 - day
	elif(ar[mon]%2 == 0 and mon == 2):
	    days = 60 - day
	elif(ar[mon]%2 == 1 and mon == 2):
	    days = 30 - day
	days = days//2 + days%2
	print(days)