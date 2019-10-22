# THIS IS TO CHECK ARMSTRONG NUMBERS FROM 1 TO 1000
arm=0
r=0
for i in range(10,10000):
    arm=0
    r=0
    k=i
    while k!=0:
          r=k%10
          arm=arm+r*r*r
          k=k//10
    arm=int(arm)
    i=int(i)
    if arm == i:
        print(str(i)+' is a armstrong number')

