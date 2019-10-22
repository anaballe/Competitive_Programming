print('enter the number')
# THIS IS TO FIND IF A NUMBER IS ARMSTRONG
num=input()
k=int(num)

arm=0
r=0
while k!=0:
      r=k%10
      arm=arm+r*r*r
      k=k//10
#print(arm)
#print(num)
arm=int(arm)
num=int(num)
if arm == num:
    print(str(num)+' is a armstrong number')
else:
    print(str(num)+' is not a armstrong number')
