import pprint
theBoard = {'top-L': ' ', 'top-M': ' ', 'top-R': ' ', 'mid-L': ' ', 'mid-M': ' ', 'mid-R': ' ', 'low-L': ' ', 'low-M': ' ', 'low-R': ' '} 
theKey =['top-L','top-M', 'top-R', 'mid-L', 'mid-M', 'mid-R', 'low-L', 'low-M','low-R']
pprint.pprint(theBoard)
def check(b):
     t=0
     if theBoard[theKey[0]]==theBoard[theKey[1]] and theBoard[theKey[1]]==theBoard[theKey[2]] and theBoard[theKey[0]]!=' ':
       t=1
     if theBoard[theKey[3]]==theBoard[theKey[4]] and theBoard[theKey[4]]==theBoard[theKey[5]] and theBoard[theKey[3]]!=' ':
       t=1
     if theBoard[theKey[6]]==theBoard[theKey[7]] and theBoard[theKey[7]]==theBoard[theKey[8]] and theBoard[theKey[6]]!=' ':
       t=1
     if theBoard[theKey[0]]==theBoard[theKey[3]] and theBoard[theKey[3]]==theBoard[theKey[6]] and theBoard[theKey[0]]!=' ':
       t=1
     if theBoard[theKey[1]]==theBoard[theKey[4]] and theBoard[theKey[4]]==theBoard[theKey[7]] and theBoard[theKey[1]]!=' ':
       t=1
     if theBoard[theKey[2]]==theBoard[theKey[5]] and theBoard[theKey[5]]==theBoard[theKey[8]] and theBoard[theKey[2]]!=' ':
       t=1
     if theBoard[theKey[0]]==theBoard[theKey[4]] and theBoard[theKey[4]]==theBoard[theKey[8]] and theBoard[theKey[0]]!=' ':
       t=1
     if theBoard[theKey[2]]==theBoard[theKey[4]] and theBoard[theKey[4]]==theBoard[theKey[6]] and theBoard[theKey[2]]!=' ':
       t=1
     if t==1:
       return 1
     else:
       return 0
def printBoard(board):
     print(board['top-L'] + '|'+board['top-M'] +'|'+board['top-R'])
     print('-+-+-')
     print(board['mid-L'] + '|'+board['mid-M'] + '|'+board['mid-R'])
     print('-+-+-')
     print(board['low-L'] + '|'+board['low-M'] + '|'+board['low-R'])
turn = 'X'
for i in range(9):
    printBoard(theBoard)
    print('Turn for ' + turn +'. Move on which space?')
    move = input()
    theBoard[move] = turn
    if turn == 'X':
      p=check(theBoard)
      if p==1:
        print('   '+turn +'  has won')
        break
      turn = 'O'
    else:
      p=check(theBoard)
      if p==1:
        print('   '+turn +'  has won')
        break
      turn = 'X'
printBoard(theBoard)
