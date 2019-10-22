# to arrange words in lexiographically manner in a sentence
print('enter the string')
s=input()
tac=s.split()
tac.sort()
new_s=''
for i in range(0,int(len(tac))):
    new_s=new_s+tac[i]+' '
print(new_s)
