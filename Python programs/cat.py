catNames = []
while True:
    print('Enter the name of cat ' + str(len(catNames) + 1) +' (Or enter nothing to stop.):')
    name = input()
    if name == '':
        break
    catNames = catNames + [name] # list concatenation
print('The cat names are:')
for i in range(0,len(catNames)):
  print(' ' + catNames[i])
